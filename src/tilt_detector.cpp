#include "imu_tilt_detection/tilt_detector.h"
#include <cmath>
#include <numeric>

TiltDetector::TiltDetector(size_t nb_values_for_mean, int tilt_threshold_deg) : _nb_values_for_mean(nb_values_for_mean), _tilt_threshold_deg(tilt_threshold_deg){
}

double TiltDetector::compute_roll_deg_from_acceleration(double x, double y, double z){
    return atan2(y, sqrt(pow(x,2) + pow(z,2))) * (180 / M_PI); //around y axis
}

double TiltDetector::compute_pitch_deg_from_acceleration(double x, double y, double z){
    return atan2(x, sqrt(pow(y,2) + pow(z,2))) * (180 / M_PI); //around x axis
}

bool TiltDetector::compute_tilt_status_from_acceleration(double x, double y, double z){
    const auto roll = compute_roll_deg_from_acceleration(x,y,z);
    const auto pitch = compute_pitch_deg_from_acceleration(x,y,z);
    
    bool tilted = false;
    roll > _tilt_threshold_deg || pitch > _tilt_threshold_deg ? tilted = true : tilted = false;
        
    if(_tilted_values.size() +1 > _nb_values_for_mean){
        _tilted_values.pop_front();
        _tilted_values.push_back(tilted);
    }else{
        _tilted_values.push_back(tilted);
    }
    
    double sum = std::accumulate(_tilted_values.begin(), _tilted_values.end(), 0.0);
        
    if (sum > _tilted_values.size() / 2.0) return true;
    return false;
}
