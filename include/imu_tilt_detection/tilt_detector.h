#pragma once

#include <deque>
#include <cstddef>

class TiltDetector
{
public:
    TiltDetector(size_t nb_values_for_mean, int tilt_threshold_deg);
    
    double compute_roll_deg_from_acceleration(double x, double y, double z);
    double compute_pitch_deg_from_acceleration(double x, double y, double z);
    bool compute_tilt_status_from_acceleration(double x, double y, double z);

private:
    std::deque<bool> _tilted_values;
    const size_t _nb_values_for_mean;
    const int _tilt_threshold_deg;
};
