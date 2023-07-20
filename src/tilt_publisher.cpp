#include "imu_tilt_detection/msg/tilt_status.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "imu_tilt_detection/tilt_detector.h"
#include <memory>

class TiltPublisher : public rclcpp::Node
{
public:
    TiltPublisher() : Node("tilt_publisher")
    {
        publisher_ = this->create_publisher<imu_tilt_detection::msg::TiltStatus>("/tilt/status", 10);
        subscription_ = this->create_subscription<sensor_msgs::msg::Imu>("/imu/data_raw", 10, std::bind(&TiltPublisher::publish_message, this, std::placeholders::_1));
        tilt_detector_ = std::make_unique<TiltDetector>(_nb_values_for_mean, _tilt_threshold_deg);
    }

private:
    void publish_message(const sensor_msgs::msg::Imu & msg)
    {
    	const auto x = msg.linear_acceleration.x;
    	const auto y = msg.linear_acceleration.y;
    	const auto z = msg.linear_acceleration.z;
    	
        auto message = imu_tilt_detection::msg::TiltStatus();
        message.header = msg.header;
        message.roll = tilt_detector_->compute_roll_deg_from_acceleration(x,y,z);
        message.pitch = tilt_detector_->compute_pitch_deg_from_acceleration(x,y,z);
        message.tilted = tilt_detector_->compute_tilt_status_from_acceleration(x,y,z);
        
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.tilted ? "True" : "False");
        publisher_->publish(message);
    }

    rclcpp::Publisher<imu_tilt_detection::msg::TiltStatus>::SharedPtr publisher_;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_; 
    std::unique_ptr<TiltDetector> tilt_detector_;
    const size_t _nb_values_for_mean = 100;
    const int _tilt_threshold_deg = 15;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TiltPublisher>());
    rclcpp::shutdown();
    return 0;
}
