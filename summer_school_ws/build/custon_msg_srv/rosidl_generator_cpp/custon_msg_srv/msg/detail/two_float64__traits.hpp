// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__TRAITS_HPP_
#define CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custon_msg_srv/msg/detail/two_float64__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custon_msg_srv
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwoFloat64 & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwoFloat64 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwoFloat64 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custon_msg_srv

namespace rosidl_generator_traits
{

[[deprecated("use custon_msg_srv::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custon_msg_srv::msg::TwoFloat64 & msg,
  std::ostream & out, size_t indentation = 0)
{
  custon_msg_srv::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custon_msg_srv::msg::to_yaml() instead")]]
inline std::string to_yaml(const custon_msg_srv::msg::TwoFloat64 & msg)
{
  return custon_msg_srv::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custon_msg_srv::msg::TwoFloat64>()
{
  return "custon_msg_srv::msg::TwoFloat64";
}

template<>
inline const char * name<custon_msg_srv::msg::TwoFloat64>()
{
  return "custon_msg_srv/msg/TwoFloat64";
}

template<>
struct has_fixed_size<custon_msg_srv::msg::TwoFloat64>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custon_msg_srv::msg::TwoFloat64>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custon_msg_srv::msg::TwoFloat64>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__TRAITS_HPP_
