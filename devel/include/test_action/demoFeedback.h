// Generated by gencpp from file test_action/demoFeedback.msg
// DO NOT EDIT!


#ifndef TEST_ACTION_MESSAGE_DEMOFEEDBACK_H
#define TEST_ACTION_MESSAGE_DEMOFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_action
{
template <class ContainerAllocator>
struct demoFeedback_
{
  typedef demoFeedback_<ContainerAllocator> Type;

  demoFeedback_()
    : complete_percent(0.0)  {
    }
  demoFeedback_(const ContainerAllocator& _alloc)
    : complete_percent(0.0)  {
  (void)_alloc;
    }



   typedef float _complete_percent_type;
  _complete_percent_type complete_percent;





  typedef boost::shared_ptr< ::test_action::demoFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_action::demoFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct demoFeedback_

typedef ::test_action::demoFeedback_<std::allocator<void> > demoFeedback;

typedef boost::shared_ptr< ::test_action::demoFeedback > demoFeedbackPtr;
typedef boost::shared_ptr< ::test_action::demoFeedback const> demoFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_action::demoFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_action::demoFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'test_action': ['/home/yangzt/yangzt_ws/devel/share/test_action/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_action::demoFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_action::demoFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_action::demoFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_action::demoFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_action::demoFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_action::demoFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_action::demoFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c375bca28786480387684f5bccabc0b5";
  }

  static const char* value(const ::test_action::demoFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc375bca287864803ULL;
  static const uint64_t static_value2 = 0x87684f5bccabc0b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_action::demoFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_action/demoFeedback";
  }

  static const char* value(const ::test_action::demoFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_action::demoFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback\n\
float32 complete_percent\n\
";
  }

  static const char* value(const ::test_action::demoFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_action::demoFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.complete_percent);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct demoFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_action::demoFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_action::demoFeedback_<ContainerAllocator>& v)
  {
    s << indent << "complete_percent: ";
    Printer<float>::stream(s, indent + "  ", v.complete_percent);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ACTION_MESSAGE_DEMOFEEDBACK_H
