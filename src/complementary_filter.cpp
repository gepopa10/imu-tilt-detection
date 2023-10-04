#include "imu_tilt_detection/complementary_filter.h"
#include <string>
#include <stdexcept>

ComplementaryFilter::ComplementaryFilter(double alpha, double prev_angle) : _alpha(alpha), _prev_angle(prev_angle)
{
    if (alpha < 0)
    {
        throw std::invalid_argument("alpha value is invalid: " + std::to_string(alpha));
    }
}

double ComplementaryFilter::compute_angle(double gyro_rate, double accel_angle, double dt)
{
    const auto angle = _alpha * (_prev_angle + gyro_rate * dt) + (1 - _alpha) * accel_angle;
    _prev_angle = angle;
    return angle; // around y axis
};
