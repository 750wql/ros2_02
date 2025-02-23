// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mat`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
info_interfaces__msg__Map__init(info_interfaces__msg__Map * msg)
{
  if (!msg) {
    return false;
  }
  // row
  // col
  // grid_width
  // grid_height
  // mat
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->mat, 0)) {
    info_interfaces__msg__Map__fini(msg);
    return false;
  }
  return true;
}

void
info_interfaces__msg__Map__fini(info_interfaces__msg__Map * msg)
{
  if (!msg) {
    return;
  }
  // row
  // col
  // grid_width
  // grid_height
  // mat
  rosidl_runtime_c__uint8__Sequence__fini(&msg->mat);
}

bool
info_interfaces__msg__Map__are_equal(const info_interfaces__msg__Map * lhs, const info_interfaces__msg__Map * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // row
  if (lhs->row != rhs->row) {
    return false;
  }
  // col
  if (lhs->col != rhs->col) {
    return false;
  }
  // grid_width
  if (lhs->grid_width != rhs->grid_width) {
    return false;
  }
  // grid_height
  if (lhs->grid_height != rhs->grid_height) {
    return false;
  }
  // mat
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->mat), &(rhs->mat)))
  {
    return false;
  }
  return true;
}

bool
info_interfaces__msg__Map__copy(
  const info_interfaces__msg__Map * input,
  info_interfaces__msg__Map * output)
{
  if (!input || !output) {
    return false;
  }
  // row
  output->row = input->row;
  // col
  output->col = input->col;
  // grid_width
  output->grid_width = input->grid_width;
  // grid_height
  output->grid_height = input->grid_height;
  // mat
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->mat), &(output->mat)))
  {
    return false;
  }
  return true;
}

info_interfaces__msg__Map *
info_interfaces__msg__Map__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Map * msg = (info_interfaces__msg__Map *)allocator.allocate(sizeof(info_interfaces__msg__Map), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(info_interfaces__msg__Map));
  bool success = info_interfaces__msg__Map__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
info_interfaces__msg__Map__destroy(info_interfaces__msg__Map * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    info_interfaces__msg__Map__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
info_interfaces__msg__Map__Sequence__init(info_interfaces__msg__Map__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Map * data = NULL;

  if (size) {
    data = (info_interfaces__msg__Map *)allocator.zero_allocate(size, sizeof(info_interfaces__msg__Map), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = info_interfaces__msg__Map__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        info_interfaces__msg__Map__fini(&data[i - 1]);
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
info_interfaces__msg__Map__Sequence__fini(info_interfaces__msg__Map__Sequence * array)
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
      info_interfaces__msg__Map__fini(&array->data[i]);
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

info_interfaces__msg__Map__Sequence *
info_interfaces__msg__Map__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Map__Sequence * array = (info_interfaces__msg__Map__Sequence *)allocator.allocate(sizeof(info_interfaces__msg__Map__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = info_interfaces__msg__Map__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
info_interfaces__msg__Map__Sequence__destroy(info_interfaces__msg__Map__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    info_interfaces__msg__Map__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
info_interfaces__msg__Map__Sequence__are_equal(const info_interfaces__msg__Map__Sequence * lhs, const info_interfaces__msg__Map__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!info_interfaces__msg__Map__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
info_interfaces__msg__Map__Sequence__copy(
  const info_interfaces__msg__Map__Sequence * input,
  info_interfaces__msg__Map__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(info_interfaces__msg__Map);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    info_interfaces__msg__Map * data =
      (info_interfaces__msg__Map *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!info_interfaces__msg__Map__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          info_interfaces__msg__Map__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!info_interfaces__msg__Map__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
