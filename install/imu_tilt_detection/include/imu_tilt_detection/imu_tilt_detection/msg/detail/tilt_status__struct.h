// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_H_
#define IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/TiltStatus in the package imu_tilt_detection.
typedef struct imu_tilt_detection__msg__TiltStatus
{
  std_msgs__msg__Header header;
  bool tilted;
  double pitch;
  double roll;
} imu_tilt_detection__msg__TiltStatus;

// Struct for a sequence of imu_tilt_detection__msg__TiltStatus.
typedef struct imu_tilt_detection__msg__TiltStatus__Sequence
{
  imu_tilt_detection__msg__TiltStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_tilt_detection__msg__TiltStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_H_
