#include <string>
#include "UsingClassObj.h"
#include "UsingClassObjAnswer.h"
#include <iostream>

void test_constructRedMotor();
void test_constructMotorWithPortNumber();
void test_constructMotorWithOppositeDirection();
void test_setMotorToMaxVoltage();
void test_setMotorToVoltage();
void test_spinMotorWithAtMaxVel();
void test_spinMotorForwardAndBack();
void test_spinMotorForEncoderCounts();
void test_calculateFeetPerSecFromGearing();

int main(int argc, char *argv[]) {
  if (argc < 2 || argv[1] == std::string("1")){
    test_constructRedMotor();
  }
  if (argc < 2 || argv[1] == std::string("2")){
    test_constructMotorWithPortNumber();
  }

  if (argc < 2 || argv[1] == std::string("3")){
    test_constructMotorWithOppositeDirection();
  }
  if (argc < 2 || argv[1] == std::string("4")){
    test_setMotorToMaxVoltage();
  }
  if (argc < 2 || argv[1] == std::string("5")){
    test_setMotorToVoltage();
  }
  if (argc < 2 || argv[1] == std::string("6")){
    test_spinMotorWithAtMaxVel();
  }
  if (argc < 2 || argv[1] == std::string("7")){
    test_spinMotorForwardAndBack();
  }
  if (argc < 2 || argv[1] == std::string("8")){
    test_spinMotorForEncoderCounts();
  }
  if (argc < 2 || argv[1] == std::string("9")){
    test_calculateFeetPerSecFromGearing();
  }
}