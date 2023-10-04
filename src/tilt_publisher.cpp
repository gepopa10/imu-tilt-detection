#include <memory>
#include <chrono>

#include "imu_tilt_detection/msg/tilt_status.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "builtin_interfaces/msg/time.hpp"
#include "diagnostic_msgs/msg/diagnostic_array.hpp"

#include "imu_tilt_detection/tilt_detector.h"
#include "imu_tilt_detection/complementary_filter.h"
#include "imu_tilt_detection/complementary_tilt_detector.h"


using namespace std::chrono_literals;

class TiltPublisher : public rclcpp::Node
{
public:
    TiltPublisher() : Node("tilt_publisher")
    {
        publisher_ = this->create_publisher<imu_tilt_detection::msg::TiltStatus>("/tilt/status", 10);
        complementary_filter_publisher_ = this->create_publisher<imu_tilt_detection::msg::TiltStatus>("/complementary_filter/tilt/status", 10);
        publisher_diagnotics_ = this->create_publisher<diagnostic_msgs::msg::DiagnosticArray>("/diagnostics", 10);
        subscription_ = this->create_subscription<sensor_msgs::msg::Imu>("/imu/data_raw", 10, std::bind(&TiltPublisher::publish_message, this, std::placeholders::_1));
        tilt_detector_ = std::make_unique<TiltDetector>(_nb_values_for_mean, _tilt_threshold_deg);
        complementary_filter_roll_ = std::make_shared<ComplementaryFilter>(_alpha, 0.0);
        complementary_filter_pitch_ = std::make_shared<ComplementaryFilter>(_alpha, 0.0);
        comp_tilt_detector_ = std::make_unique<ComplementaryTiltDetector>(complementary_filter_roll_, complementary_filter_pitch_, _tilt_threshold_deg);
        timer_ = this->create_wall_timer(1000ms, std::bind(&TiltPublisher::diagnostics, this));
    }

private:
    void publish_message(const sensor_msgs::msg::Imu & msg)
    {
    	const auto x = msg.linear_acceleration.x;
    	const auto y = msg.linear_acceleration.y;
    	const auto z = msg.linear_acceleration.z;

        const auto g_x = msg.angular_velocity.x;
    	const auto g_y = msg.angular_velocity.y;
    	
        auto message = imu_tilt_detection::msg::TiltStatus();
        message.header = msg.header;
        
        auto time_diff = rclcpp::Node::now() - _last_imu_time;
        _last_imu_time = rclcpp::Node::now(); // msg.header.stamp will not work with a rosbag that has a different msg times
        
        message.roll = tilt_detector_->compute_roll_deg_from_acceleration(x,y,z);
        message.pitch = tilt_detector_->compute_pitch_deg_from_acceleration(x,y,z);
        message.tilted = tilt_detector_->compute_tilt_status_from_acceleration(x,y,z);

        auto message_filter = message;
        const auto dt = time_diff.seconds();
        message_filter.tilted = comp_tilt_detector_->compute_tilt_status(g_x, message.roll, g_y, message.pitch, dt);
        message_filter.roll = comp_tilt_detector_->get_roll();
        message_filter.pitch = comp_tilt_detector_->get_pitch();
        
        if(_tilted != message.tilted){
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.tilted ? "True" : "False");
            _tilted = message.tilted;
        }
            
        publisher_->publish(message);
        complementary_filter_publisher_->publish(message_filter);
    }
    
    void diagnostics()
    {
    	auto message = diagnostic_msgs::msg::DiagnosticArray();
    	auto status = diagnostic_msgs::msg::DiagnosticStatus();
    	status.name = "tilt status";
        status.message = "";
        status.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
        message.header.stamp = rclcpp::Node::now();
    	
    	rclcpp::Duration diff = rclcpp::Node::now() - _last_imu_time;
        auto num_of_milli = diff.to_chrono<std::chrono::duration<uint64_t, std::milli>>();

        if(num_of_milli.count() > 2000){ // 2 secs without imu message
            status.level = diagnostic_msgs::msg::DiagnosticStatus::ERROR;
            status.message = "No IMU from 2 secs.";
        }
    	
    	message.status.push_back(status);
    	publisher_diagnotics_->publish(message);
    }

    rclcpp::Publisher<imu_tilt_detection::msg::TiltStatus>::SharedPtr publisher_;
    rclcpp::Publisher<imu_tilt_detection::msg::TiltStatus>::SharedPtr complementary_filter_publisher_;
    rclcpp::Publisher<diagnostic_msgs::msg::DiagnosticArray>::SharedPtr publisher_diagnotics_;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::unique_ptr<TiltDetector> tilt_detector_;
    const size_t _nb_values_for_mean = 100;
    const int _tilt_threshold_deg = 15;
    builtin_interfaces::msg::Time _last_imu_time = rclcpp::Node::now();
    bool _tilted = false;
    const double _alpha = 0.98;
    std::shared_ptr<ComplementaryFilter> complementary_filter_roll_;
    std::shared_ptr<ComplementaryFilter> complementary_filter_pitch_;
    std::unique_ptr<ComplementaryTiltDetector> comp_tilt_detector_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TiltPublisher>());
    rclcpp::shutdown();
    return 0;
}
