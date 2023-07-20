// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_HPP_
#define IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_tilt_detection__msg__TiltStatus __attribute__((deprecated))
#else
# define DEPRECATED__imu_tilt_detection__msg__TiltStatus __declspec(deprecated)
#endif

namespace imu_tilt_detection
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TiltStatus_
{
  using Type = TiltStatus_<ContainerAllocator>;

  explicit TiltStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tilted = false;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  explicit TiltStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tilted = false;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tilted_type =
    bool;
  _tilted_type tilted;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tilted(
    const bool & _arg)
  {
    this->tilted = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_tilt_detection__msg__TiltStatus
    std::shared_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_tilt_detection__msg__TiltStatus
    std::shared_ptr<imu_tilt_detection::msg::TiltStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TiltStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tilted != other.tilted) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const TiltStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TiltStatus_

// alias to use template instance with default allocator
using TiltStatus =
  imu_tilt_detection::msg::TiltStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_tilt_detection

#endif  // IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__STRUCT_HPP_
