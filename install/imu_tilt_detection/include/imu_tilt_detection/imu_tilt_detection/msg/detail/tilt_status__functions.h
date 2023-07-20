// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice

#ifndef IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__FUNCTIONS_H_
#define IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "imu_tilt_detection/msg/rosidl_generator_c__visibility_control.h"

#include "imu_tilt_detection/msg/detail/tilt_status__struct.h"

/// Initialize msg/TiltStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imu_tilt_detection__msg__TiltStatus
 * )) before or use
 * imu_tilt_detection__msg__TiltStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__init(imu_tilt_detection__msg__TiltStatus * msg);

/// Finalize msg/TiltStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
void
imu_tilt_detection__msg__TiltStatus__fini(imu_tilt_detection__msg__TiltStatus * msg);

/// Create msg/TiltStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imu_tilt_detection__msg__TiltStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
imu_tilt_detection__msg__TiltStatus *
imu_tilt_detection__msg__TiltStatus__create();

/// Destroy msg/TiltStatus message.
/**
 * It calls
 * imu_tilt_detection__msg__TiltStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
void
imu_tilt_detection__msg__TiltStatus__destroy(imu_tilt_detection__msg__TiltStatus * msg);

/// Check for msg/TiltStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__are_equal(const imu_tilt_detection__msg__TiltStatus * lhs, const imu_tilt_detection__msg__TiltStatus * rhs);

/// Copy a msg/TiltStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__copy(
  const imu_tilt_detection__msg__TiltStatus * input,
  imu_tilt_detection__msg__TiltStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
const rosidl_type_hash_t *
imu_tilt_detection__msg__TiltStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
const rosidl_runtime_c__type_description__TypeDescription *
imu_tilt_detection__msg__TiltStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
const rosidl_runtime_c__type_description__TypeSource *
imu_tilt_detection__msg__TiltStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
const rosidl_runtime_c__type_description__TypeSource__Sequence *
imu_tilt_detection__msg__TiltStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TiltStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * imu_tilt_detection__msg__TiltStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__Sequence__init(imu_tilt_detection__msg__TiltStatus__Sequence * array, size_t size);

/// Finalize array of msg/TiltStatus messages.
/**
 * It calls
 * imu_tilt_detection__msg__TiltStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
void
imu_tilt_detection__msg__TiltStatus__Sequence__fini(imu_tilt_detection__msg__TiltStatus__Sequence * array);

/// Create array of msg/TiltStatus messages.
/**
 * It allocates the memory for the array and calls
 * imu_tilt_detection__msg__TiltStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
imu_tilt_detection__msg__TiltStatus__Sequence *
imu_tilt_detection__msg__TiltStatus__Sequence__create(size_t size);

/// Destroy array of msg/TiltStatus messages.
/**
 * It calls
 * imu_tilt_detection__msg__TiltStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
void
imu_tilt_detection__msg__TiltStatus__Sequence__destroy(imu_tilt_detection__msg__TiltStatus__Sequence * array);

/// Check for msg/TiltStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__Sequence__are_equal(const imu_tilt_detection__msg__TiltStatus__Sequence * lhs, const imu_tilt_detection__msg__TiltStatus__Sequence * rhs);

/// Copy an array of msg/TiltStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_tilt_detection
bool
imu_tilt_detection__msg__TiltStatus__Sequence__copy(
  const imu_tilt_detection__msg__TiltStatus__Sequence * input,
  imu_tilt_detection__msg__TiltStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMU_TILT_DETECTION__MSG__DETAIL__TILT_STATUS__FUNCTIONS_H_
