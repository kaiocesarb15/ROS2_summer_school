// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custon_msg_srv/msg/detail/two_float64__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custon_msg_srv
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TwoFloat64_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custon_msg_srv::msg::TwoFloat64(_init);
}

void TwoFloat64_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custon_msg_srv::msg::TwoFloat64 *>(message_memory);
  typed_message->~TwoFloat64();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TwoFloat64_message_member_array[2] = {
  {
    "num1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custon_msg_srv::msg::TwoFloat64, num1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custon_msg_srv::msg::TwoFloat64, num2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TwoFloat64_message_members = {
  "custon_msg_srv::msg",  // message namespace
  "TwoFloat64",  // message name
  2,  // number of fields
  sizeof(custon_msg_srv::msg::TwoFloat64),
  TwoFloat64_message_member_array,  // message members
  TwoFloat64_init_function,  // function to initialize message memory (memory has to be allocated)
  TwoFloat64_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TwoFloat64_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TwoFloat64_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custon_msg_srv


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custon_msg_srv::msg::TwoFloat64>()
{
  return &::custon_msg_srv::msg::rosidl_typesupport_introspection_cpp::TwoFloat64_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custon_msg_srv, msg, TwoFloat64)() {
  return &::custon_msg_srv::msg::rosidl_typesupport_introspection_cpp::TwoFloat64_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
