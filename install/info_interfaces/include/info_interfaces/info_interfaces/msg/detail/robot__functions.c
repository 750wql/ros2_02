// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `our_robot`
// Member `enemy`
#include "info_interfaces/msg/detail/point__functions.h"

bool
info_interfaces__msg__Robot__init(info_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return false;
  }
  // our_robot
  if (!info_interfaces__msg__Point__init(&msg->our_robot)) {
    info_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // enemy
  if (!info_interfaces__msg__Point__Sequence__init(&msg->enemy, 0)) {
    info_interfaces__msg__Robot__fini(msg);
    return false;
  }
  return true;
}

void
info_interfaces__msg__Robot__fini(info_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return;
  }
  // our_robot
  info_interfaces__msg__Point__fini(&msg->our_robot);
  // enemy
  info_interfaces__msg__Point__Sequence__fini(&msg->enemy);
}

bool
info_interfaces__msg__Robot__are_equal(const info_interfaces__msg__Robot * lhs, const info_interfaces__msg__Robot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // our_robot
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->our_robot), &(rhs->our_robot)))
  {
    return false;
  }
  // enemy
  if (!info_interfaces__msg__Point__Sequence__are_equal(
      &(lhs->enemy), &(rhs->enemy)))
  {
    return false;
  }
  return true;
}

bool
info_interfaces__msg__Robot__copy(
  const info_interfaces__msg__Robot * input,
  info_interfaces__msg__Robot * output)
{
  if (!input || !output) {
    return false;
  }
  // our_robot
  if (!info_interfaces__msg__Point__copy(
      &(input->our_robot), &(output->our_robot)))
  {
    return false;
  }
  // enemy
  if (!info_interfaces__msg__Point__Sequence__copy(
      &(input->enemy), &(output->enemy)))
  {
    return false;
  }
  return true;
}

info_interfaces__msg__Robot *
info_interfaces__msg__Robot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Robot * msg = (info_interfaces__msg__Robot *)allocator.allocate(sizeof(info_interfaces__msg__Robot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(info_interfaces__msg__Robot));
  bool success = info_interfaces__msg__Robot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
info_interfaces__msg__Robot__destroy(info_interfaces__msg__Robot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    info_interfaces__msg__Robot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
info_interfaces__msg__Robot__Sequence__init(info_interfaces__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Robot * data = NULL;

  if (size) {
    data = (info_interfaces__msg__Robot *)allocator.zero_allocate(size, sizeof(info_interfaces__msg__Robot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = info_interfaces__msg__Robot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        info_interfaces__msg__Robot__fini(&data[i - 1]);
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
info_interfaces__msg__Robot__Sequence__fini(info_interfaces__msg__Robot__Sequence * array)
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
      info_interfaces__msg__Robot__fini(&array->data[i]);
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

info_interfaces__msg__Robot__Sequence *
info_interfaces__msg__Robot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Robot__Sequence * array = (info_interfaces__msg__Robot__Sequence *)allocator.allocate(sizeof(info_interfaces__msg__Robot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = info_interfaces__msg__Robot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
info_interfaces__msg__Robot__Sequence__destroy(info_interfaces__msg__Robot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    info_interfaces__msg__Robot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
info_interfaces__msg__Robot__Sequence__are_equal(const info_interfaces__msg__Robot__Sequence * lhs, const info_interfaces__msg__Robot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!info_interfaces__msg__Robot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
info_interfaces__msg__Robot__Sequence__copy(
  const info_interfaces__msg__Robot__Sequence * input,
  info_interfaces__msg__Robot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(info_interfaces__msg__Robot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    info_interfaces__msg__Robot * data =
      (info_interfaces__msg__Robot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!info_interfaces__msg__Robot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          info_interfaces__msg__Robot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!info_interfaces__msg__Robot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
