/**
 * @file UsingClassObj.h
 * @author Aaron Bloch
 * @brief Functions to be completed by students.
 * These functions use the MotorV5 class to teach using classes
 * @version 0.1
 * @date 2024-08-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include "Motor.h"

/**
 * @brief Constructs a motor class object as a blue geared motor
 * 
 * @param rtn 
 */
void constructBlueMotor(MotorV5* rtn);

/**
 * @brief Constructs a motor class object as a blue geared motor 
 * 
 * @param rtn 
 */
void constructRedMotor(MotorV5* rtn);

/**
 * @brief Constructs a motor with given portNumber 
 * 
 * @param rtn 
 * @param portNumber 
 */
void constructMotorWithPortNumber(MotorV5* rtn, int portNumber);

/**
 * @brief Constructs a motor with reversed motor direction 
 * 
 * @param rtn 
 */
void constructMotorWithOppositeDirection(MotorV5* rtn);

/**
 * @brief Set the Motor To Max Voltage
 * 
 * @param rtn 
 */
void setMotorToMaxVoltage(MotorV5* rtn);

/**
 * @brief Set the Motor To Voltage
 * 
 * @param rtn 
 * @param voltage 
 */
void setMotorToVoltage(MotorV5* rtn, int voltage);

/**
 * @brief Spins the motor with max velocity/voltage 
 * 
 * @param rtn 
 */
void spinMotorWithAtMaxVel(MotorV5* rtn);

/**
 * @brief Spins Motor Forward for 1 second and the Backward for 2 seconds 
 * 
 * @param rtn 
 */
void spinMotorForwardAndBack(MotorV5* rtn);

/**
 * @brief Spins the motor for the given encoder counts
 * 
 * @param rtn 
 * @param encoderCounts 
 */
void spinMotorForEncoderCounts(MotorV5* rtn, int encoderCounts);

/**
 * @brief calculates the feet per second with given wheel diameter 
 * 
 * @param wheelDiameter_in 
 * @return float feet per second
 */
float calculateFeetPerSecFromGearing(float wheelDiameter_in);