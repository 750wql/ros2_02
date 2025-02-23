// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from info_interfaces:msg/Point.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
info_interfaces__msg__Point__init(info_interfaces__msg__Point * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
info_interfaces__msg__Point__fini(info_interfaces__msg__Point * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
info_interfaces__msg__Point__are_equal(const info_interfaces__msg__Point * lhs, const info_interfaces__msg__Point * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
info_interfaces__msg__Point__copy(
  const info_interfaces__msg__Point * input,
  info_interfaces__msg__Point * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

info_interfaces__msg__Point *
info_interfaces__msg__Point__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Point * msg = (info_interfaces__msg__Point *)allocator.allocate(sizeof(info_interfaces__msg__Point), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(info_interfaces__msg__Point));
  bool success = info_interfaces__msg__Point__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
info_interfaces__msg__Point__destroy(info_interfaces__msg__Point * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    info_interfaces__msg__Point__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
info_interfaces__msg__Point__Sequence__init(info_interfaces__msg__Point__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Point * data = NULL;

  if (size) {
    data = (info_interfaces__msg__Point *)allocator.zero_allocate(size, sizeof(info_interfaces__msg__Point), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = info_interfaces__msg__Point__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        info_interfaces__msg__Point__fini(&data[i - 1]);
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
info_interfaces__msg__Point__Sequence__fini(info_interfaces__msg__Point__Sequence * array)
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
      info_interfaces__msg__Point__fini(&array->data[i]);
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

info_interfaces__msg__Point__Sequence *
info_interfaces__msg__Point__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Point__Sequence * array = (info_interfaces__msg__Point__Sequence *)allocator.allocate(sizeof(info_interfaces__msg__Point__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = info_interfaces__msg__Point__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
info_interfaces__msg__Point__Sequence__destroy(info_interfaces__msg__Point__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    info_interfaces__msg__Point__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
info_interfaces__msg__Point__Sequence__are_equal(const info_interfaces__msg__Point__Sequence * lhs, const info_interfaces__msg__Point__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!info_interfaces__msg__Point__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
info_interfaces__msg__Point__Sequence__copy(
  const info_interfaces__msg__Point__Sequence * input,
  info_interfaces__msg__Point__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(info_interfaces__msg__Point);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    info_interfaces__msg__Point * data =
      (info_interfaces__msg__Point *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!info_interfaces__msg__Point__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          info_interfaces__msg__Point__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!info_interfaces__msg__Point__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
