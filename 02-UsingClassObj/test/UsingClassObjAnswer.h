#pragma once

#include "Motor.h"

void constructBlueMotor_answer(MotorV5* rtn);

void constructRedMotor_answer(MotorV5* rtn);

void constructMotorWithPortNumber_answer(MotorV5* rtn, int portNumber);

void constructMotorWithOppositeDirection_answer(MotorV5* rtn);

void setMotorToMaxVoltage_answer(MotorV5* rtn);

void setMotorToVoltage_answer(MotorV5* rtn, int voltage);

void spinMotorWithAtMaxVel_answer(MotorV5* rtn);

void spinMotorForwardAndBack_answer(MotorV5* rtn);

void spinMotorForEncoderCounts_answer(MotorV5* rtn, int encoderCounts);

float calculateFeetPerSecFromGearing_answer(float wheelDiameter_in);

