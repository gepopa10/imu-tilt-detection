// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_tilt_detection:msg/TiltStatus.idl
// generated code does not contain a copyright notice
#include "imu_tilt_detection/msg/detail/tilt_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
imu_tilt_detection__msg__TiltStatus__init(imu_tilt_detection__msg__TiltStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_tilt_detection__msg__TiltStatus__fini(msg);
    return false;
  }
  // tilted
  // pitch
  // roll
  return true;
}

void
imu_tilt_detection__msg__TiltStatus__fini(imu_tilt_detection__msg__TiltStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tilted
  // pitch
  // roll
}

bool
imu_tilt_detection__msg__TiltStatus__are_equal(const imu_tilt_detection__msg__TiltStatus * lhs, const imu_tilt_detection__msg__TiltStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tilted
  if (lhs->tilted != rhs->tilted) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  return true;
}

bool
imu_tilt_detection__msg__TiltStatus__copy(
  const imu_tilt_detection__msg__TiltStatus * input,
  imu_tilt_detection__msg__TiltStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tilted
  output->tilted = input->tilted;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  return true;
}

imu_tilt_detection__msg__TiltStatus *
imu_tilt_detection__msg__TiltStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_tilt_detection__msg__TiltStatus * msg = (imu_tilt_detection__msg__TiltStatus *)allocator.allocate(sizeof(imu_tilt_detection__msg__TiltStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_tilt_detection__msg__TiltStatus));
  bool success = imu_tilt_detection__msg__TiltStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_tilt_detection__msg__TiltStatus__destroy(imu_tilt_detection__msg__TiltStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_tilt_detection__msg__TiltStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_tilt_detection__msg__TiltStatus__Sequence__init(imu_tilt_detection__msg__TiltStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_tilt_detection__msg__TiltStatus * data = NULL;

  if (size) {
    data = (imu_tilt_detection__msg__TiltStatus *)allocator.zero_allocate(size, sizeof(imu_tilt_detection__msg__TiltStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_tilt_detection__msg__TiltStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_tilt_detection__msg__TiltStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
imu_tilt_detection__msg__TiltStatus__Sequence__fini(imu_tilt_detection__msg__TiltStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      imu_tilt_detection__msg__TiltStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

imu_tilt_detection__msg__TiltStatus__Sequence *
imu_tilt_detection__msg__TiltStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_tilt_detection__msg__TiltStatus__Sequence * array = (imu_tilt_detection__msg__TiltStatus__Sequence *)allocator.allocate(sizeof(imu_tilt_detection__msg__TiltStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_tilt_detection__msg__TiltStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_tilt_detection__msg__TiltStatus__Sequence__destroy(imu_tilt_detection__msg__TiltStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_tilt_detection__msg__TiltStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_tilt_detection__msg__TiltStatus__Sequence__are_equal(const imu_tilt_detection__msg__TiltStatus__Sequence * lhs, const imu_tilt_detection__msg__TiltStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_tilt_detection__msg__TiltStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_tilt_detection__msg__TiltStatus__Sequence__copy(
  const imu_tilt_detection__msg__TiltStatus__Sequence * input,
  imu_tilt_detection__msg__TiltStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_tilt_detection__msg__TiltStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imu_tilt_detection__msg__TiltStatus * data =
      (imu_tilt_detection__msg__TiltStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_tilt_detection__msg__TiltStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imu_tilt_detection__msg__TiltStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_tilt_detection__msg__TiltStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
