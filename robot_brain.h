//
// Created by Mert Akozcan on 11/26/17.
//

#ifndef ROBOT_BRAIN_H
#define ROBOT_BRAIN_H

#include "motor_controller.h"
#include "distance_controller.h"

class RobotBrain {

public:
  RobotBrain() {}
  
  ~RobotBrain() {
    delete motorController;
    delete distanceController;
  }

  void Work();

protected:
  MotorController *motorController;
  DistanceController *distanceController;

};

#endif //ROBOT_BRAIN_H