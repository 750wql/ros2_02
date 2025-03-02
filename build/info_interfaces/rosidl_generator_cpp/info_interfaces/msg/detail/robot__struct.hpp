// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'our_robot'
// Member 'enemy'
#include "info_interfaces/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__info_interfaces__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__info_interfaces__msg__Robot __declspec(deprecated)
#endif

namespace info_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : our_robot(_init)
  {
    (void)_init;
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : our_robot(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _our_robot_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _our_robot_type our_robot;
  using _enemy_type =
    std::vector<info_interfaces::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<info_interfaces::msg::Point_<ContainerAllocator>>>;
  _enemy_type enemy;

  // setters for named parameter idiom
  Type & set__our_robot(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->our_robot = _arg;
    return *this;
  }
  Type & set__enemy(
    const std::vector<info_interfaces::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<info_interfaces::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->enemy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    info_interfaces::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const info_interfaces::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<info_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<info_interfaces::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<info_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<info_interfaces::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__info_interfaces__msg__Robot
    std::shared_ptr<info_interfaces::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__info_interfaces__msg__Robot
    std::shared_ptr<info_interfaces::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->our_robot != other.our_robot) {
      return false;
    }
    if (this->enemy != other.enemy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  info_interfaces::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
