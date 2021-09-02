// Generated by gencpp from file lesson2_homework/TurtleMoveGoal.msg
// DO NOT EDIT!


#ifndef LESSON2_HOMEWORK_MESSAGE_TURTLEMOVEGOAL_H
#define LESSON2_HOMEWORK_MESSAGE_TURTLEMOVEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lesson2_homework
{
template <class ContainerAllocator>
struct TurtleMoveGoal_
{
  typedef TurtleMoveGoal_<ContainerAllocator> Type;

  TurtleMoveGoal_()
    : turtle_target_x(0.0)
    , turtle_target_y(0.0)
    , turtle_target_theta(0.0)  {
    }
  TurtleMoveGoal_(const ContainerAllocator& _alloc)
    : turtle_target_x(0.0)
    , turtle_target_y(0.0)
    , turtle_target_theta(0.0)  {
  (void)_alloc;
    }



   typedef double _turtle_target_x_type;
  _turtle_target_x_type turtle_target_x;

   typedef double _turtle_target_y_type;
  _turtle_target_y_type turtle_target_y;

   typedef double _turtle_target_theta_type;
  _turtle_target_theta_type turtle_target_theta;





  typedef boost::shared_ptr< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TurtleMoveGoal_

typedef ::lesson2_homework::TurtleMoveGoal_<std::allocator<void> > TurtleMoveGoal;

typedef boost::shared_ptr< ::lesson2_homework::TurtleMoveGoal > TurtleMoveGoalPtr;
typedef boost::shared_ptr< ::lesson2_homework::TurtleMoveGoal const> TurtleMoveGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator1> & lhs, const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator2> & rhs)
{
  return lhs.turtle_target_x == rhs.turtle_target_x &&
    lhs.turtle_target_y == rhs.turtle_target_y &&
    lhs.turtle_target_theta == rhs.turtle_target_theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator1> & lhs, const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lesson2_homework

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6ca75a13b0855b8f735f0fec295b281";
  }

  static const char* value(const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6ca75a13b0855b8ULL;
  static const uint64_t static_value2 = 0xf735f0fec295b281ULL;
};

template<class ContainerAllocator>
struct DataType< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lesson2_homework/TurtleMoveGoal";
  }

  static const char* value(const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"float64 turtle_target_x\n"
"# Specify Turtle's target position\n"
"float64 turtle_target_y\n"
"float64 turtle_target_theta\n"
;
  }

  static const char* value(const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.turtle_target_x);
      stream.next(m.turtle_target_y);
      stream.next(m.turtle_target_theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtleMoveGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lesson2_homework::TurtleMoveGoal_<ContainerAllocator>& v)
  {
    s << indent << "turtle_target_x: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_x);
    s << indent << "turtle_target_y: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_y);
    s << indent << "turtle_target_theta: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LESSON2_HOMEWORK_MESSAGE_TURTLEMOVEGOAL_H
