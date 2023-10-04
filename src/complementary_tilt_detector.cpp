#include "imu_tilt_detection/complementary_tilt_detector.h"
#include <cmath>

ComplementaryTiltDetector::ComplementaryTiltDetector(std::shared_ptr<ComplementaryFilter> complementary_filter_roll,
                                                     std::shared_ptr<ComplementaryFilter> complementary_filter_pitch,
                                                     int tilt_threshold_deg) : _complementary_filter_roll(complementary_filter_roll),
                                                                               _complementary_filter_pitch(complementary_filter_pitch),
                                                                               _tilt_threshold_deg(tilt_threshold_deg)
{
}

bool ComplementaryTiltDetector::compute_tilt_status(double gyro_rate_x, double accel_angle_x, double gyro_rate_y, double accel_angle_y, double dt)
{
    _roll = _complementary_filter_roll->compute_angle(gyro_rate_x, accel_angle_x, dt);
    _pitch = _complementary_filter_pitch->compute_angle(gyro_rate_y, accel_angle_y, dt);

    _overall_tilt = std::sqrt(std::pow(_roll, 2) + std::pow(_pitch, 2));

    if (_overall_tilt > _tilt_threshold_deg)
    {
        _tilt_status = true;
    }
    else
    {
        _tilt_status = false;
    }

    return _tilt_status;
}
bool ComplementaryTiltDetector::get_tilt_status() const
{
    return _tilt_status;
}
double ComplementaryTiltDetector::get_roll() const
{
    return _roll;
}
double ComplementaryTiltDetector::get_pitch() const
{
    return _pitch;
}
double ComplementaryTiltDetector::get_overall_tilt() const
{
    return _overall_tilt;
}
