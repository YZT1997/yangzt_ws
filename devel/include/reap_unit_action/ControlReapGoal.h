// Generated by gencpp from file reap_unit_action/ControlReapGoal.msg
// DO NOT EDIT!


#ifndef REAP_UNIT_ACTION_MESSAGE_CONTROLREAPGOAL_H
#define REAP_UNIT_ACTION_MESSAGE_CONTROLREAPGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace reap_unit_action
{
template <class ContainerAllocator>
struct ControlReapGoal_
{
  typedef ControlReapGoal_<ContainerAllocator> Type;

  ControlReapGoal_()
    : dishwasher_id(0)
    , target_speed(0)  {
    }
  ControlReapGoal_(const ContainerAllocator& _alloc)
    : dishwasher_id(0)
    , target_speed(0)  {
  (void)_alloc;
    }



   typedef uint32_t _dishwasher_id_type;
  _dishwasher_id_type dishwasher_id;

   typedef uint32_t _target_speed_type;
  _target_speed_type target_speed;





  typedef boost::shared_ptr< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ControlReapGoal_

typedef ::reap_unit_action::ControlReapGoal_<std::allocator<void> > ControlReapGoal;

typedef boost::shared_ptr< ::reap_unit_action::ControlReapGoal > ControlReapGoalPtr;
typedef boost::shared_ptr< ::reap_unit_action::ControlReapGoal const> ControlReapGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::reap_unit_action::ControlReapGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace reap_unit_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'reap_unit_action': ['/home/yangzt/yangzt_ws/devel/share/reap_unit_action/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "387286c6496ed104d896e0772e459e70";
  }

  static const char* value(const ::reap_unit_action::ControlReapGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x387286c6496ed104ULL;
  static const uint64_t static_value2 = 0xd896e0772e459e70ULL;
};

template<class ContainerAllocator>
struct DataType< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "reap_unit_action/ControlReapGoal";
  }

  static const char* value(const ::reap_unit_action::ControlReapGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
uint32 dishwasher_id  # Specify which dishwasher we want to use\n\
uint32 target_speed  # Target speed\n\
";
  }

  static const char* value(const ::reap_unit_action::ControlReapGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dishwasher_id);
      stream.next(m.target_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlReapGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reap_unit_action::ControlReapGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::reap_unit_action::ControlReapGoal_<ContainerAllocator>& v)
  {
    s << indent << "dishwasher_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dishwasher_id);
    s << indent << "target_speed: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.target_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REAP_UNIT_ACTION_MESSAGE_CONTROLREAPGOAL_H