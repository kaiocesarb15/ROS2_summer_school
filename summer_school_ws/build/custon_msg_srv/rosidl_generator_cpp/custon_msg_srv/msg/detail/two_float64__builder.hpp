// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__BUILDER_HPP_
#define CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custon_msg_srv/msg/detail/two_float64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custon_msg_srv
{

namespace msg
{

namespace builder
{

class Init_TwoFloat64_num2
{
public:
  explicit Init_TwoFloat64_num2(::custon_msg_srv::msg::TwoFloat64 & msg)
  : msg_(msg)
  {}
  ::custon_msg_srv::msg::TwoFloat64 num2(::custon_msg_srv::msg::TwoFloat64::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custon_msg_srv::msg::TwoFloat64 msg_;
};

class Init_TwoFloat64_num1
{
public:
  Init_TwoFloat64_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoFloat64_num2 num1(::custon_msg_srv::msg::TwoFloat64::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_TwoFloat64_num2(msg_);
  }

private:
  ::custon_msg_srv::msg::TwoFloat64 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custon_msg_srv::msg::TwoFloat64>()
{
  return custon_msg_srv::msg::builder::Init_TwoFloat64_num1();
}

}  // namespace custon_msg_srv

#endif  // CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__BUILDER_HPP_
