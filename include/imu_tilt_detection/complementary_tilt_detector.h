#pragma once

#include <memory>

#include "imu_tilt_detection/complementary_filter.h"

class ComplementaryTiltDetector
{
public:
    ComplementaryTiltDetector(std::shared_ptr<ComplementaryFilter> complementary_filter_roll,
                              std::shared_ptr<ComplementaryFilter> complementary_filter_pitch,
                              int tilt_threshold_deg);

    bool compute_tilt_status(double gyro_rate_x, double accel_angle_x, double gyro_rate_y, double accel_angle_y, double dt);
    bool get_tilt_status() const;
    double get_roll() const;
    double get_pitch() const;
    double get_overall_tilt() const;
private:
    std::shared_ptr<ComplementaryFilter> _complementary_filter_roll;
    std::shared_ptr<ComplementaryFilter> _complementary_filter_pitch;
    const int _tilt_threshold_deg;
    bool _tilt_status;
    double _roll;
    double _pitch;
    double _overall_tilt;
};