// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__FUNCTIONS_H_
#define CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custon_msg_srv/msg/rosidl_generator_c__visibility_control.h"

#include "custon_msg_srv/msg/detail/two_float64__struct.h"

/// Initialize msg/TwoFloat64 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custon_msg_srv__msg__TwoFloat64
 * )) before or use
 * custon_msg_srv__msg__TwoFloat64__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__init(custon_msg_srv__msg__TwoFloat64 * msg);

/// Finalize msg/TwoFloat64 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
void
custon_msg_srv__msg__TwoFloat64__fini(custon_msg_srv__msg__TwoFloat64 * msg);

/// Create msg/TwoFloat64 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custon_msg_srv__msg__TwoFloat64__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
custon_msg_srv__msg__TwoFloat64 *
custon_msg_srv__msg__TwoFloat64__create();

/// Destroy msg/TwoFloat64 message.
/**
 * It calls
 * custon_msg_srv__msg__TwoFloat64__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
void
custon_msg_srv__msg__TwoFloat64__destroy(custon_msg_srv__msg__TwoFloat64 * msg);

/// Check for msg/TwoFloat64 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__are_equal(const custon_msg_srv__msg__TwoFloat64 * lhs, const custon_msg_srv__msg__TwoFloat64 * rhs);

/// Copy a msg/TwoFloat64 message.
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
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__copy(
  const custon_msg_srv__msg__TwoFloat64 * input,
  custon_msg_srv__msg__TwoFloat64 * output);

/// Initialize array of msg/TwoFloat64 messages.
/**
 * It allocates the memory for the number of elements and calls
 * custon_msg_srv__msg__TwoFloat64__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__Sequence__init(custon_msg_srv__msg__TwoFloat64__Sequence * array, size_t size);

/// Finalize array of msg/TwoFloat64 messages.
/**
 * It calls
 * custon_msg_srv__msg__TwoFloat64__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
void
custon_msg_srv__msg__TwoFloat64__Sequence__fini(custon_msg_srv__msg__TwoFloat64__Sequence * array);

/// Create array of msg/TwoFloat64 messages.
/**
 * It allocates the memory for the array and calls
 * custon_msg_srv__msg__TwoFloat64__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
custon_msg_srv__msg__TwoFloat64__Sequence *
custon_msg_srv__msg__TwoFloat64__Sequence__create(size_t size);

/// Destroy array of msg/TwoFloat64 messages.
/**
 * It calls
 * custon_msg_srv__msg__TwoFloat64__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
void
custon_msg_srv__msg__TwoFloat64__Sequence__destroy(custon_msg_srv__msg__TwoFloat64__Sequence * array);

/// Check for msg/TwoFloat64 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__Sequence__are_equal(const custon_msg_srv__msg__TwoFloat64__Sequence * lhs, const custon_msg_srv__msg__TwoFloat64__Sequence * rhs);

/// Copy an array of msg/TwoFloat64 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custon_msg_srv
bool
custon_msg_srv__msg__TwoFloat64__Sequence__copy(
  const custon_msg_srv__msg__TwoFloat64__Sequence * input,
  custon_msg_srv__msg__TwoFloat64__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__FUNCTIONS_H_
