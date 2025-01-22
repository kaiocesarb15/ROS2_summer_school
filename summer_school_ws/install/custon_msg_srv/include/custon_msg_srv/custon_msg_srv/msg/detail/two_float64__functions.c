// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice
#include "custon_msg_srv/msg/detail/two_float64__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custon_msg_srv__msg__TwoFloat64__init(custon_msg_srv__msg__TwoFloat64 * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  // num2
  return true;
}

void
custon_msg_srv__msg__TwoFloat64__fini(custon_msg_srv__msg__TwoFloat64 * msg)
{
  if (!msg) {
    return;
  }
  // num1
  // num2
}

bool
custon_msg_srv__msg__TwoFloat64__are_equal(const custon_msg_srv__msg__TwoFloat64 * lhs, const custon_msg_srv__msg__TwoFloat64 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num1
  if (lhs->num1 != rhs->num1) {
    return false;
  }
  // num2
  if (lhs->num2 != rhs->num2) {
    return false;
  }
  return true;
}

bool
custon_msg_srv__msg__TwoFloat64__copy(
  const custon_msg_srv__msg__TwoFloat64 * input,
  custon_msg_srv__msg__TwoFloat64 * output)
{
  if (!input || !output) {
    return false;
  }
  // num1
  output->num1 = input->num1;
  // num2
  output->num2 = input->num2;
  return true;
}

custon_msg_srv__msg__TwoFloat64 *
custon_msg_srv__msg__TwoFloat64__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custon_msg_srv__msg__TwoFloat64 * msg = (custon_msg_srv__msg__TwoFloat64 *)allocator.allocate(sizeof(custon_msg_srv__msg__TwoFloat64), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custon_msg_srv__msg__TwoFloat64));
  bool success = custon_msg_srv__msg__TwoFloat64__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custon_msg_srv__msg__TwoFloat64__destroy(custon_msg_srv__msg__TwoFloat64 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custon_msg_srv__msg__TwoFloat64__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custon_msg_srv__msg__TwoFloat64__Sequence__init(custon_msg_srv__msg__TwoFloat64__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custon_msg_srv__msg__TwoFloat64 * data = NULL;

  if (size) {
    data = (custon_msg_srv__msg__TwoFloat64 *)allocator.zero_allocate(size, sizeof(custon_msg_srv__msg__TwoFloat64), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custon_msg_srv__msg__TwoFloat64__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custon_msg_srv__msg__TwoFloat64__fini(&data[i - 1]);
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
custon_msg_srv__msg__TwoFloat64__Sequence__fini(custon_msg_srv__msg__TwoFloat64__Sequence * array)
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
      custon_msg_srv__msg__TwoFloat64__fini(&array->data[i]);
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

custon_msg_srv__msg__TwoFloat64__Sequence *
custon_msg_srv__msg__TwoFloat64__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custon_msg_srv__msg__TwoFloat64__Sequence * array = (custon_msg_srv__msg__TwoFloat64__Sequence *)allocator.allocate(sizeof(custon_msg_srv__msg__TwoFloat64__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custon_msg_srv__msg__TwoFloat64__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custon_msg_srv__msg__TwoFloat64__Sequence__destroy(custon_msg_srv__msg__TwoFloat64__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custon_msg_srv__msg__TwoFloat64__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custon_msg_srv__msg__TwoFloat64__Sequence__are_equal(const custon_msg_srv__msg__TwoFloat64__Sequence * lhs, const custon_msg_srv__msg__TwoFloat64__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custon_msg_srv__msg__TwoFloat64__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custon_msg_srv__msg__TwoFloat64__Sequence__copy(
  const custon_msg_srv__msg__TwoFloat64__Sequence * input,
  custon_msg_srv__msg__TwoFloat64__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custon_msg_srv__msg__TwoFloat64);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custon_msg_srv__msg__TwoFloat64 * data =
      (custon_msg_srv__msg__TwoFloat64 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custon_msg_srv__msg__TwoFloat64__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custon_msg_srv__msg__TwoFloat64__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custon_msg_srv__msg__TwoFloat64__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
