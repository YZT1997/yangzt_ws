#include <ros/publisher.h>
#include <ros/ros.h>
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Bool.h"
#include <iostream>
#include <sstream>
#include <string>
//using namespace std;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "fakeSpeed");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::Bool>("is_obstacle", 1000);
	ros::Publisher chatter_pub2 = n.advertise<std_msgs::Float32>("car_speed",1000);
	ros::Publisher chatter_pub3 = n.advertise<std_msgs::Float32>("motor_current", 1000);
	ros::Rate loop_rate(10);

	std_msgs::Bool msg_obstacle;
	std_msgs::Float32 msg_speed;
	std_msgs::Float32 msg_current;
	int count = 0;
    bool obstacle_state = false;
	while (ros::ok() && count < 20000)
	{
		/**
		 * 向 Topic: chatter 发送消息, 发送频率为10Hz（1秒发10次）；消息池最大容量2000。
		 */
		msg_obstacle.data = obstacle_state ;
		msg_speed.data = 1.5;
		chatter_pub.publish(msg_obstacle);
		chatter_pub2.publish(msg_speed);
//		std::cout<<"Car speed "<<msg_speed.data<<std::endl;
//		std::cout<<"It is "<<msg_obstacle.data<<std::endl;
        msg_current.data = static_cast<float>(count / 5);
        chatter_pub3.publish(msg_current);
        std::cout<<"Motor current is "<<msg_current.data<<std::endl;

		loop_rate.sleep();
		// ++count;
		count  = count + 1;
		obstacle_state = !(obstacle_state);
	}
	ROS_INFO_STREAM("Speed end");
	return 0;

}
