#include "calculator/calculator_node.hpp"

namespace calculator
{
/* calculator_node() //{ */
calculator_node::calculator_node(const rclcpp::NodeOptions &options) : rclcpp_lifecycle::LifecycleNode("calculator_node", "", options) {
  RCLCPP_INFO(get_logger(), "Creating");

  declare_parameter("rate.pub_calculator_result", rclcpp::ParameterValue(1.0));

  is_active_ = false;
  result_.data = 0;
  number1_ = 0;
  number2_ = 0;
}
//}

/* ~calculator_node() //{ */
calculator_node::~calculator_node() {
}
//}

/* on_configure() //{ */
CallbackReturn calculator_node::on_configure(const rclcpp_lifecycle::State &) {
  RCLCPP_INFO(get_logger(), "Configuring");

  getParameters();
  configPubSub();
  configTimers();
  configServices();

  return CallbackReturn::SUCCESS;
}
//}

/* on_activate() //{ */
CallbackReturn calculator_node::on_activate([[maybe_unused]] const rclcpp_lifecycle::State &state) {
  RCLCPP_INFO(get_logger(), "Activating");

  pub_calculator_result_->on_activate();

  is_active_ = true;

  return CallbackReturn::SUCCESS;
}
//}

/* on_deactivate() //{ */
CallbackReturn calculator_node::on_deactivate([[maybe_unused]] const rclcpp_lifecycle::State &state) {
  RCLCPP_INFO(get_logger(), "Deactivating");

  pub_calculator_result_->on_deactivate();

  is_active_ = false;

  return CallbackReturn::SUCCESS;
}
//}

/* on_clenaup() //{ */
CallbackReturn calculator_node::on_cleanup([[maybe_unused]] const rclcpp_lifecycle::State &state) {
  RCLCPP_INFO(get_logger(), "Cleaning up");

  sub_calculator_input_.reset();

  pub_calculator_result_.reset();

  tmr_pub_calculator_result_.reset();

  return CallbackReturn::SUCCESS;
}
//}

/* on_shutdown() //{ */
CallbackReturn calculator_node::on_shutdown([[maybe_unused]] const rclcpp_lifecycle::State &state) {
  RCLCPP_INFO(get_logger(), "Shutting down");

  return CallbackReturn::SUCCESS;
}
//}

/* getParameters() //{ */
void calculator_node::getParameters() {
  get_parameter("rate.pub_calculator_result", _rate_pub_calculator_result_);
}
//}

/* configPubSub() //{ */
void calculator_node::configPubSub() {
  RCLCPP_INFO(get_logger(), "initPubSub");

  // Pubs and Subs for topics
  sub_calculator_input_ = create_subscription<custon_msg_srv::msg::TwoFloat64>("OP_numbers", 1, std::bind(&calculator_node::subCalculatorInput, this, std::placeholders::_1));

  pub_calculator_result_ = create_publisher<std_msgs::msg::Float64>("OP_result", 1);
}
//}

/* configTimers() //{ */
void calculator_node::configTimers() {
  RCLCPP_INFO(get_logger(), "initTimers");

  tmr_pub_calculator_result_ = create_wall_timer(std::chrono::duration<double>(1.0 / _rate_pub_calculator_result_),
                                                         std::bind(&calculator_node::tmrPubCalculatorResult, this), nullptr);
}
//}

/* configServices() //{ */
void calculator_node::configServices() {
  RCLCPP_INFO(get_logger(), "initServices");

  srv_change_operator_ = create_service<custon_msg_srv::srv::Setop>("Change_OP", std::bind(&calculator_node::srvChangeOperator, this, std::placeholders::_1, std::placeholders::_2));
}
//}

/* subCalculatorInput() //{ */
void calculator_node::subCalculatorInput(const custon_msg_srv::msg::TwoFloat64 &msg) {
  if (!is_active_) {
    return;
  }

  RCLCPP_INFO(this->get_logger(), "Received input: %f, %f", msg.num1, msg.num2);

  number1_ = msg.num1;
  number2_ = msg.num2;
}
//}

/* tmrPubCalculatorResult() //{ */
void calculator_node::tmrPubCalculatorResult() {
  if (!is_active_) {
    return;
  }

  if (operation_ == "add") result_.data = number1_ + number2_;
  else if (operation_ == "sub") result_.data = number1_ - number2_;
  else if (operation_ == "mul") result_.data = number1_ * number2_;
  else if (operation_ == "div") {
    if (number2_ != 0) {
      result_.data = number1_ / number2_;
    } else {
      result_.data = 0;  // Ou qualquer valor padrão para indicar erro
      RCLCPP_WARN(this->get_logger(), "Division by zero!");
    }
  }else result_.data = 0;  // Ou qualquer valor padrão para indicar erro

  pub_calculator_result_->publish(result_);
  RCLCPP_INFO(this->get_logger(), "Published result: %f", result_.data);
}
//}

/* srvChangeOperator() //{ */
void calculator_node::srvChangeOperator([[maybe_unused]] const std::shared_ptr<custon_msg_srv::srv::Setop::Request> request,
                         [[maybe_unused]] std::shared_ptr<custon_msg_srv::srv::Setop::Response>      response) {
  if (!is_active_) {
    return;
  }

  response->success = true;

  operation_ = request->op;

if (request->op == "add") {
    response->message = "Operator changed to (+)";
    RCLCPP_INFO(this->get_logger(), "Operator changed to (+)");
  } 
  else if (request->op == "sub") {
    response->message = "Operator changed to (-)";
    RCLCPP_INFO(this->get_logger(), "Operator changed to (-)");
  } 
  else if (request->op == "mul") {
    response->message = "Operator changed to (*)";
    RCLCPP_INFO(this->get_logger(), "Operator changed to (*)");
  } 
  else if (request->op == "div") {
    response->message = "Operator changed to (/)";
    RCLCPP_INFO(this->get_logger(), "Operator changed to (/)");
  } 
  else {
    RCLCPP_WARN(this->get_logger(), "Invalid operator received: %s", request->op.c_str());
    response->message = "Invalid operator";
    response->success = false;
  }
}
//}

}  // namespace calculator

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(calculator::calculator_node)
