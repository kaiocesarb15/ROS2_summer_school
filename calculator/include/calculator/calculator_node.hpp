#ifndef CALCULATOR__CALCULATOR_NODE_HPP
#define CALCULATOR__CALCULATOR_NODE_HPP

#include <memory>
#include <mutex>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"

#include <std_msgs/msg/float64.hpp>
#include "custon_msg_srv/msg/two_float64.hpp"
#include "custon_msg_srv/srv/setop.hpp"

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

namespace calculator
{
class calculator_node : public rclcpp_lifecycle::LifecycleNode {
public:
  explicit calculator_node(const rclcpp::NodeOptions &options = rclcpp::NodeOptions());

  ~calculator_node() override;

private:
  CallbackReturn on_configure(const rclcpp_lifecycle::State &);

  CallbackReturn on_activate(const rclcpp_lifecycle::State &state);

  CallbackReturn on_deactivate(const rclcpp_lifecycle::State &state);

  CallbackReturn on_cleanup(const rclcpp_lifecycle::State &);

  CallbackReturn on_shutdown(const rclcpp_lifecycle::State &state);

  void getParameters();
  void configPubSub();
  void configTimers();
  void configServices();

  rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::Float64>::SharedPtr pub_calculator_result_;
  rclcpp::TimerBase::SharedPtr                                            tmr_pub_calculator_result_;
  void                                                                    tmrPubCalculatorResult();

  rclcpp::Subscription<custon_msg_srv::msg::TwoFloat64>::SharedPtr sub_calculator_input_;
  void                                                                subCalculatorInput(const custon_msg_srv::msg::TwoFloat64 &msg);

  rclcpp::Service<custon_msg_srv::srv::Setop>::SharedPtr srv_change_operator_;
  void srvChangeOperator(const std::shared_ptr<custon_msg_srv::srv::Setop::Request> request, std::shared_ptr<custon_msg_srv::srv::Setop::Response> response);

  bool is_active_;

  std_msgs::msg::Float64 result_;

  double _rate_pub_calculator_result_;

  float number1_;
  float number2_;
  
  std::string operation_;
};
}  // namespace calculator

#endif
