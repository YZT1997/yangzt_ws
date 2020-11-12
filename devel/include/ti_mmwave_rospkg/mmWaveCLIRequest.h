// Generated by gencpp from file ti_mmwave_rospkg/mmWaveCLIRequest.msg
// DO NOT EDIT!


#ifndef TI_MMWAVE_ROSPKG_MESSAGE_MMWAVECLIREQUEST_H
#define TI_MMWAVE_ROSPKG_MESSAGE_MMWAVECLIREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ti_mmwave_rospkg
{
template <class ContainerAllocator>
struct mmWaveCLIRequest_
{
  typedef mmWaveCLIRequest_<ContainerAllocator> Type;

  mmWaveCLIRequest_()
    : comm()  {
    }
  mmWaveCLIRequest_(const ContainerAllocator& _alloc)
    : comm(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _comm_type;
  _comm_type comm;





  typedef boost::shared_ptr< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> const> ConstPtr;

}; // struct mmWaveCLIRequest_

typedef ::ti_mmwave_rospkg::mmWaveCLIRequest_<std::allocator<void> > mmWaveCLIRequest;

typedef boost::shared_ptr< ::ti_mmwave_rospkg::mmWaveCLIRequest > mmWaveCLIRequestPtr;
typedef boost::shared_ptr< ::ti_mmwave_rospkg::mmWaveCLIRequest const> mmWaveCLIRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ti_mmwave_rospkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'ti_mmwave_rospkg': ['/home/yangzt/yangzt_ws/src/ti_mmwave_rospkg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "705dab568ba6ff458350c8b88cb19648";
  }

  static const char* value(const ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x705dab568ba6ff45ULL;
  static const uint64_t static_value2 = 0x8350c8b88cb19648ULL;
};

template<class ContainerAllocator>
struct DataType< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ti_mmwave_rospkg/mmWaveCLIRequest";
  }

  static const char* value(const ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string comm\n\
";
  }

  static const char* value(const ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.comm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mmWaveCLIRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ti_mmwave_rospkg::mmWaveCLIRequest_<ContainerAllocator>& v)
  {
    s << indent << "comm: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.comm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TI_MMWAVE_ROSPKG_MESSAGE_MMWAVECLIREQUEST_H
