// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base`
// Member `recover`
// Member `password`
// Member `green_in`
// Member `green_out`
// Member `purple_in`
// Member `purple_out`
// Member `hp`
#include "info_interfaces/msg/detail/point__functions.h"

bool
info_interfaces__msg__Area__init(info_interfaces__msg__Area * msg)
{
  if (!msg) {
    return false;
  }
  // base
  if (!info_interfaces__msg__Point__init(&msg->base)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // recover
  if (!info_interfaces__msg__Point__init(&msg->recover)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // password
  if (!info_interfaces__msg__Point__init(&msg->password)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // green_in
  if (!info_interfaces__msg__Point__init(&msg->green_in)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // green_out
  if (!info_interfaces__msg__Point__init(&msg->green_out)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // purple_in
  if (!info_interfaces__msg__Point__init(&msg->purple_in)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // purple_out
  if (!info_interfaces__msg__Point__init(&msg->purple_out)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  // hp
  if (!info_interfaces__msg__Point__init(&msg->hp)) {
    info_interfaces__msg__Area__fini(msg);
    return false;
  }
  return true;
}

void
info_interfaces__msg__Area__fini(info_interfaces__msg__Area * msg)
{
  if (!msg) {
    return;
  }
  // base
  info_interfaces__msg__Point__fini(&msg->base);
  // recover
  info_interfaces__msg__Point__fini(&msg->recover);
  // password
  info_interfaces__msg__Point__fini(&msg->password);
  // green_in
  info_interfaces__msg__Point__fini(&msg->green_in);
  // green_out
  info_interfaces__msg__Point__fini(&msg->green_out);
  // purple_in
  info_interfaces__msg__Point__fini(&msg->purple_in);
  // purple_out
  info_interfaces__msg__Point__fini(&msg->purple_out);
  // hp
  info_interfaces__msg__Point__fini(&msg->hp);
}

bool
info_interfaces__msg__Area__are_equal(const info_interfaces__msg__Area * lhs, const info_interfaces__msg__Area * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->base), &(rhs->base)))
  {
    return false;
  }
  // recover
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->recover), &(rhs->recover)))
  {
    return false;
  }
  // password
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->password), &(rhs->password)))
  {
    return false;
  }
  // green_in
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->green_in), &(rhs->green_in)))
  {
    return false;
  }
  // green_out
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->green_out), &(rhs->green_out)))
  {
    return false;
  }
  // purple_in
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->purple_in), &(rhs->purple_in)))
  {
    return false;
  }
  // purple_out
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->purple_out), &(rhs->purple_out)))
  {
    return false;
  }
  // hp
  if (!info_interfaces__msg__Point__are_equal(
      &(lhs->hp), &(rhs->hp)))
  {
    return false;
  }
  return true;
}

bool
info_interfaces__msg__Area__copy(
  const info_interfaces__msg__Area * input,
  info_interfaces__msg__Area * output)
{
  if (!input || !output) {
    return false;
  }
  // base
  if (!info_interfaces__msg__Point__copy(
      &(input->base), &(output->base)))
  {
    return false;
  }
  // recover
  if (!info_interfaces__msg__Point__copy(
      &(input->recover), &(output->recover)))
  {
    return false;
  }
  // password
  if (!info_interfaces__msg__Point__copy(
      &(input->password), &(output->password)))
  {
    return false;
  }
  // green_in
  if (!info_interfaces__msg__Point__copy(
      &(input->green_in), &(output->green_in)))
  {
    return false;
  }
  // green_out
  if (!info_interfaces__msg__Point__copy(
      &(input->green_out), &(output->green_out)))
  {
    return false;
  }
  // purple_in
  if (!info_interfaces__msg__Point__copy(
      &(input->purple_in), &(output->purple_in)))
  {
    return false;
  }
  // purple_out
  if (!info_interfaces__msg__Point__copy(
      &(input->purple_out), &(output->purple_out)))
  {
    return false;
  }
  // hp
  if (!info_interfaces__msg__Point__copy(
      &(input->hp), &(output->hp)))
  {
    return false;
  }
  return true;
}

info_interfaces__msg__Area *
info_interfaces__msg__Area__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Area * msg = (info_interfaces__msg__Area *)allocator.allocate(sizeof(info_interfaces__msg__Area), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(info_interfaces__msg__Area));
  bool success = info_interfaces__msg__Area__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
info_interfaces__msg__Area__destroy(info_interfaces__msg__Area * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    info_interfaces__msg__Area__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
info_interfaces__msg__Area__Sequence__init(info_interfaces__msg__Area__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Area * data = NULL;

  if (size) {
    data = (info_interfaces__msg__Area *)allocator.zero_allocate(size, sizeof(info_interfaces__msg__Area), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = info_interfaces__msg__Area__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        info_interfaces__msg__Area__fini(&data[i - 1]);
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
info_interfaces__msg__Area__Sequence__fini(info_interfaces__msg__Area__Sequence * array)
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
      info_interfaces__msg__Area__fini(&array->data[i]);
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

info_interfaces__msg__Area__Sequence *
info_interfaces__msg__Area__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  info_interfaces__msg__Area__Sequence * array = (info_interfaces__msg__Area__Sequence *)allocator.allocate(sizeof(info_interfaces__msg__Area__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = info_interfaces__msg__Area__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
info_interfaces__msg__Area__Sequence__destroy(info_interfaces__msg__Area__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    info_interfaces__msg__Area__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
info_interfaces__msg__Area__Sequence__are_equal(const info_interfaces__msg__Area__Sequence * lhs, const info_interfaces__msg__Area__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!info_interfaces__msg__Area__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
info_interfaces__msg__Area__Sequence__copy(
  const info_interfaces__msg__Area__Sequence * input,
  info_interfaces__msg__Area__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(info_interfaces__msg__Area);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    info_interfaces__msg__Area * data =
      (info_interfaces__msg__Area *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!info_interfaces__msg__Area__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          info_interfaces__msg__Area__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!info_interfaces__msg__Area__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
