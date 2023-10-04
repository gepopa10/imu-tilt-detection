#pragma once

class ComplementaryFilter
{
public:
    ComplementaryFilter(double alpha, double prev_angle);
    
    double compute_angle(double gyro_rate, double accel_angle, double dt);

private:
    const double _alpha;
    double _prev_angle;
};
