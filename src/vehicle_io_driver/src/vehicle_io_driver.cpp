#include "ros/ros.h"
#include <sstream>
#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdlib>
#include "unistd.h"
#include "controlcan.h"
//#include <vehicle_input_msg/vehicle_input.h>
//#include <vehicle_output_msg/vehicle_output.h>
#include <thread>
#include <Eigen/Eigen>


class vehicle_io_control
{
private:
  ros::NodeHandle nh_;
//  ros::Subscriber vehicle_io_sub_;
  ros::Publisher vehicle_io_pub_;
  std::thread* control_thread_;
  std::thread* vehicle_io_pub_thread_;

public:
  vehicle_io_control()
  {
//    vehicle_io_sub_ = nh_.subscribe("/vehicle_output_msgs", 100, &vehicle_io_control::vehicle_io_control_func, this);
    vehicle_io_pub_ = nh_.advertise<vehicle_input_msg::vehicle_input>("/vehicle_input_msgs", 100, true);

    control_thread_ = new std::thread(boost::bind(&vehicle_io_control::control_func,this));// control thread
    vehicle_io_pub_thread_ = new std::thread(boost::bind(&vehicle_io_control::vehicle_io_pub_func,this));// control thread
  }

  ~vehicle_io_control(){}

//  void vehicle_io_control_func(const vehicle_output_msg::vehicle_output& vehicle_output_msg)
//  {
//      write_io(vehicle_output_msg.light);
//  }

  void vehicle_io_pub_func(void)
  {
   ros::Rate loop_rate(5);//0.2s

   while (ros::ok()) {
     printf("een");
//     vehicle_stop_func();
     ros::spinOnce();
     loop_rate.sleep();
     }

   }


  void control_func(void)
  {
    if(VCI_OpenDevice(VCI_USBCAN2,0,0)==1)
    {
      printf(">>open deivce success!\n");
    }
    else
    {
      printf(">>open deivce error!\n");
      exit(-1);
    }
    //init CAN Configuration
    VCI_INIT_CONFIG config;
    config.AccCode=0;
    config.AccMask=0xFFFFFFFF;
    config.Filter=1;
    config.Timing0=0x03;/*125 Kbps*/
    config.Timing1=0x1C;
    config.Mode=0;

    if(VCI_InitCAN(VCI_USBCAN2,0,0,&config)!=1)
    {
      printf(">>Init CAN1 error\n");
      VCI_CloseDevice(VCI_USBCAN2,0);
    }

    if(VCI_StartCAN(VCI_USBCAN2,0,0)!=1)
    {
      printf(">>Start CAN1 error\n");
      VCI_CloseDevice(VCI_USBCAN2,0);
    }
    ros::Rate loop_rate(5);//0.2s
    while (ros::ok()) {
      ros::spinOnce();
      read_io();
      loop_rate.sleep();
    }
  }

  void vehicle_stop_func(void){
     int j;
     int ind=0;
     int reclen=0;
     VCI_CAN_OBJ rec[3000];

     if((reclen=VCI_Receive(VCI_USBCAN1,0,ind,rec,3000,100))>0){
       for(j=0;j<reclen;j++){
         if(rec[j].ID==0x201){
           std::cout << "ok_0" <<std::endl;
           if(rec[j].Data[4]==0x01){
           std::cout << "ok_0" <<std::endl;
            }
            }
          // std::cout << "ok_0" <<std::endl;
         }

        }
     }


  // read
  void read_io(void)
  {
      VCI_CAN_OBJ send[1];
      send[0].ID=0x200;
      send[0].SendType=0;
      send[0].RemoteFlag=0;
      send[0].ExternFlag=0;
      send[0].DataLen=8;

      send[0].Data[0] =0x01;
      send[0].Data[1] =0x13;
      send[0].Data[2] =0x07;
      send[0].Data[3] =0x00;
      send[0].Data[4] =0x00;
      send[0].Data[5] =0x00;
      send[0].Data[6] =0x00;
      send[0].Data[7] =0x15;
      VCI_Transmit(VCI_USBCAN2,0,0,send,1);
  }

  // write
  void write_io(void)
  {
      VCI_CAN_OBJ send[1];
      send[0].ID=0x200;
      send[0].SendType=0;
      send[0].RemoteFlag=0;
      send[0].ExternFlag=0;
      send[0].DataLen=8;

      send[0].Data[0] =0x01;
      send[0].Data[1] =0x11;
      send[0].Data[2] =0x09;
      send[0].Data[3] =0x00;
      send[0].Data[4] =0x05;
//      if(color == 1){
//        send[0].Data[4] =0x01;
//      }else if(color == 2){
//        send[0].Data[4] =0x02;
//      }else if(color == 3){
//        send[0].Data[4] =0x04;
//      }else{
//        send[0].Data[4] =0x00;
//      }
      send[0].Data[5] =0x00;
      send[0].Data[6] =0x00;
      send[0].Data[7] =0x1C;
      VCI_Transmit(VCI_USBCAN2,0,0,send,1);
  }

  void halt(void)
  {
    control_thread_ -> join();
    vehicle_io_pub_thread_ -> join();
  }

};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "vehicle_io_driver");
  ros::Time::init();

  vehicle_io_control init_control;
  init_control.halt();

  return 0;
}






























































