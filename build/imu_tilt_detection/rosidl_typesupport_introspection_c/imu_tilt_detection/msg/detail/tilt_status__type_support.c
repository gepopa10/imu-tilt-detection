// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imu_tilt_detection/msg/detail/tilt_status__rosidl_typesupport_introspection_c.h"
#include "imu_tilt_detection/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imu_tilt_detection/msg/detail/tilt_status__functions.h"
#include "imu_tilt_detection/msg/detail/tilt_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imu_tilt_detection__msg__TiltStatus__init(message_memory);
}

void imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_fini_function(void * message_memory)
{
  imu_tilt_detection__msg__TiltStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_tilt_detection__msg__TiltStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tilted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_tilt_detection__msg__TiltStatus, tilted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_tilt_detection__msg__TiltStatus, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_tilt_detection__msg__TiltStatus, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_members = {
  "imu_tilt_detection__msg",  // message namespace
  "TiltStatus",  // message name
  4,  // number of fields
  sizeof(imu_tilt_detection__msg__TiltStatus),
  imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_member_array,  // message members
  imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_type_support_handle = {
  0,
  &imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_members,
  get_message_typesupport_handle_function,
  &imu_tilt_detection__msg__TiltStatus__get_type_hash,
  &imu_tilt_detection__msg__TiltStatus__get_type_description,
  &imu_tilt_detection__msg__TiltStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_tilt_detection
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_tilt_detection, msg, TiltStatus)() {
  imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_type_support_handle.typesupport_identifier) {
    imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imu_tilt_detection__msg__TiltStatus__rosidl_typesupport_introspection_c__TiltStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
