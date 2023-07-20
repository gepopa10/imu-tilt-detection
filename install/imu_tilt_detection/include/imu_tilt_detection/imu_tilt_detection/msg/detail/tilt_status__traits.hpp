// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__TRAITS_HPP_
#define IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_tilt_detection/msg/detail/tilt_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace imu_tilt_detection
{

namespace msg
{

inline void to_flow_style_yaml(
  const TiltStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tilted
  {
    out << "tilted: ";
    rosidl_generator_traits::value_to_yaml(msg.tilted, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TiltStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tilted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilted: ";
    rosidl_generator_traits::value_to_yaml(msg.tilted, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TiltStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace imu_tilt_detection

namespace rosidl_generator_traits
{

[[deprecated("use imu_tilt_detection::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imu_tilt_detection::msg::TiltStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_tilt_detection::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_tilt_detection::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_tilt_detection::msg::TiltStatus & msg)
{
  return imu_tilt_detection::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_tilt_detection::msg::TiltStatus>()
{
  return "imu_tilt_detection::msg::TiltStatus";
}

template<>
inline const char * name<imu_tilt_detection::msg::TiltStatus>()
{
  return "imu_tilt_detection/msg/TiltStatus";
}

template<>
struct has_fixed_size<imu_tilt_detection::msg::TiltStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_tilt_detection::msg::TiltStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_tilt_detection::msg::TiltStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__TRAITS_HPP_
