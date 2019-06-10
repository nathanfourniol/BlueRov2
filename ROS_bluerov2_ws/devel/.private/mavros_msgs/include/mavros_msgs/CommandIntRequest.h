// Generated by gencpp from file mavros_msgs/CommandIntRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDINTREQUEST_H
#define MAVROS_MSGS_MESSAGE_COMMANDINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandIntRequest_
{
  typedef CommandIntRequest_<ContainerAllocator> Type;

  CommandIntRequest_()
    : broadcast(false)
    , frame(0)
    , command(0)
    , current(0)
    , autocontinue(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x(0)
    , y(0)
    , z(0.0)  {
    }
  CommandIntRequest_(const ContainerAllocator& _alloc)
    : broadcast(false)
    , frame(0)
    , command(0)
    , current(0)
    , autocontinue(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x(0)
    , y(0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _broadcast_type;
  _broadcast_type broadcast;

   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef uint16_t _command_type;
  _command_type command;

   typedef uint8_t _current_type;
  _current_type current;

   typedef uint8_t _autocontinue_type;
  _autocontinue_type autocontinue;

   typedef float _param1_type;
  _param1_type param1;

   typedef float _param2_type;
  _param2_type param2;

   typedef float _param3_type;
  _param3_type param3;

   typedef float _param4_type;
  _param4_type param4;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandIntRequest_

typedef ::mavros_msgs::CommandIntRequest_<std::allocator<void> > CommandIntRequest;

typedef boost::shared_ptr< ::mavros_msgs::CommandIntRequest > CommandIntRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandIntRequest const> CommandIntRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandIntRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/nathan/ROS_bluerov2_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6165959012c47e0f665b640c1ab12391";
  }

  static const char* value(const ::mavros_msgs::CommandIntRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6165959012c47e0fULL;
  static const uint64_t static_value2 = 0x665b640c1ab12391ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandIntRequest";
  }

  static const char* value(const ::mavros_msgs::CommandIntRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
bool broadcast\n\
\n\
uint8 frame\n\
uint16 command\n\
uint8 current\n\
uint8 autocontinue\n\
float32 param1\n\
float32 param2\n\
float32 param3\n\
float32 param4\n\
int32 x\n\
int32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::mavros_msgs::CommandIntRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.broadcast);
      stream.next(m.frame);
      stream.next(m.command);
      stream.next(m.current);
      stream.next(m.autocontinue);
      stream.next(m.param1);
      stream.next(m.param2);
      stream.next(m.param3);
      stream.next(m.param4);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandIntRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandIntRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandIntRequest_<ContainerAllocator>& v)
  {
    s << indent << "broadcast: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.broadcast);
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "command: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.command);
    s << indent << "current: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current);
    s << indent << "autocontinue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autocontinue);
    s << indent << "param1: ";
    Printer<float>::stream(s, indent + "  ", v.param1);
    s << indent << "param2: ";
    Printer<float>::stream(s, indent + "  ", v.param2);
    s << indent << "param3: ";
    Printer<float>::stream(s, indent + "  ", v.param3);
    s << indent << "param4: ";
    Printer<float>::stream(s, indent + "  ", v.param4);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDINTREQUEST_H
