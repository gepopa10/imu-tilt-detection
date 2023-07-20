// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__BUILDER_HPP_
#define IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_tilt_detection/msg/detail/tilt_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_tilt_detection
{

namespace msg
{

namespace builder
{

class Init_TiltStatus_roll
{
public:
  explicit Init_TiltStatus_roll(::imu_tilt_detection::msg::TiltStatus & msg)
  : msg_(msg)
  {}
  ::imu_tilt_detection::msg::TiltStatus roll(::imu_tilt_detection::msg::TiltStatus::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_tilt_detection::msg::TiltStatus msg_;
};

class Init_TiltStatus_pitch
{
public:
  explicit Init_TiltStatus_pitch(::imu_tilt_detection::msg::TiltStatus & msg)
  : msg_(msg)
  {}
  Init_TiltStatus_roll pitch(::imu_tilt_detection::msg::TiltStatus::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_TiltStatus_roll(msg_);
  }

private:
  ::imu_tilt_detection::msg::TiltStatus msg_;
};

class Init_TiltStatus_tilted
{
public:
  explicit Init_TiltStatus_tilted(::imu_tilt_detection::msg::TiltStatus & msg)
  : msg_(msg)
  {}
  Init_TiltStatus_pitch tilted(::imu_tilt_detection::msg::TiltStatus::_tilted_type arg)
  {
    msg_.tilted = std::move(arg);
    return Init_TiltStatus_pitch(msg_);
  }

private:
  ::imu_tilt_detection::msg::TiltStatus msg_;
};

class Init_TiltStatus_header
{
public:
  Init_TiltStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TiltStatus_tilted header(::imu_tilt_detection::msg::TiltStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TiltStatus_tilted(msg_);
  }

private:
  ::imu_tilt_detection::msg::TiltStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_tilt_detection::msg::TiltStatus>()
{
  return imu_tilt_detection::msg::builder::Init_TiltStatus_header();
}

}  // namespace imu_tilt_detection

#endif  // IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__BUILDER_HPP_
