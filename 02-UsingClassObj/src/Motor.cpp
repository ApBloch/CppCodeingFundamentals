/**
 * @file Motor.cpp
 * @author Aaron Bloch
 * @brief Implementation of MotorV5 Class
 * @version 0.1
 * @date 2024-08-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "Motor.h"
#include <algorithm>

/**
 * @brief Construct a new Motor V 5:: Motor V 5 object
 * 
 * @param portNumber 
 * @param isReversed 
 * @param _gearSet 
 */
MotorV5::MotorV5(int portNumber, bool isReversed, motor_gearset_e_t _gearSet)
    : portNumber(portNumber)
    , gearSet(_gearSet)
    , isReversed(!isReversed)
    , encoderCounts(0)
    , voltage(0)
{}

/**
 * @brief Construct a new Motor V 5:: Motor V 5 object
 * 
 * @param portNumber 
 * @param isReversed 
 */
MotorV5::MotorV5(int portNumber, bool isReversed)
    : portNumber(portNumber)
    , gearSet(E_MOTOR_GEAR_GREEN)
    , isReversed(!isReversed)
    , encoderCounts(0)
    , voltage(0)
{}

/**
 * @brief Construct a new Motor V 5:: Motor V 5 object
 * 
 * @param portNumber 
 */
MotorV5::MotorV5(int portNumber)
    : portNumber(portNumber)
    , gearSet(E_MOTOR_GEAR_GREEN)
    , isReversed(false)
    , encoderCounts(0)
    , voltage(0)
{}

/**
 * @brief Will emulate a motor rotation over a given time duration.
 *         Internal encoder counts will be updated to show the motor spinning.
 * 
 * @param timeDelta_ms 
 */
void MotorV5::update(int timeDelta_ms){
    double RPM = (double)getRPMFromGearing(gearSet);
    double scaledRPM = (RPM + RPM)/(MAX_VOLTAGE - MIN_VOLTAGE)*voltage;
    if(isReversed){
        scaledRPM = scaledRPM * -1.0f;
    }
    double rotations = scaledRPM * (1/60.0) * (1/1000.0) * timeDelta_ms; 
    encoderCounts += rotations * getCountsPerRevFromGearing(gearSet);
}

/**
 * @brief Will set the motor's voltage to move the motor.
 *          Voltage cannot be set above 127 or below -127.
 * 
 * @param _voltage 
 */
void MotorV5::move(int _voltage){
   voltage = _voltage;
   std::clamp(voltage, MIN_VOLTAGE, MAX_VOLTAGE);
}

/**
 * @brief Returns the Voltage the motor is set to
 * 
 * @return int 
 */
int MotorV5::get_voltage(){
    return voltage;
}

/**
 * @brief Returns the encoder value of the motor
 * 
 * @return double 
 */
double MotorV5::get_position(){
    return encoderCounts;
}

/**
 * @brief Will set the encoderCounts or position to 0 
 * 
 */
void MotorV5::tare_position(){
    encoderCounts = 0;
}

/**
 * @brief Returns the counts per revolution of the gearset of the motor 
 * 
 * @return int 
 */
int MotorV5::getCountsPerRev(){
    return getCountsPerRevFromGearing(gearSet);
}

/**
 * @brief Returns the gearset of the motor
 * 
 * @return motor_gearset_e 
 */
motor_gearset_e MotorV5::get_gearset(){
    return gearSet;
}

/**
 * @brief Will set the gearset of the motor 
 * 
 * @param _gearset 
 */
void MotorV5::set_gearset(motor_gearset_e _gearset){
    gearSet = _gearset;
}

/**
 * @brief Returns the port number of the motor
 * 
 * @return int 
 */
int MotorV5::get_port_number(){
    return portNumber;
}

/**
 * @brief Sets the port number of the motor 
 * 
 * @param _portNumber 
 */
void MotorV5::set_port_number(int _portNumber){
    portNumber = _portNumber;
}

/**
 * @brief Returns if the motor is reversed or not 
 * 
 * @return true
 * @return false 
 */
bool MotorV5::getIsReversed(){
    return isReversed;
}

int MotorV5::getRPMFromGearing(motor_gearset_e gear){
    switch (gear){
        case E_MOTOR_GEARSET_36:
            return 100;
        case E_MOTOR_GEARSET_18:
            return 200;
        case E_MOTOR_GEARSET_06:
            return 600;
        default:
            return 0;
    }
}

int MotorV5::getCountsPerRevFromGearing(motor_gearset_e gear){
    switch (gear){
        case E_MOTOR_GEARSET_36:
            return 1800;
        case E_MOTOR_GEARSET_18:
            return 900;
        case E_MOTOR_GEARSET_06:
            return 300;
        default:
            return 0;
    }
}

std::string gearAsString[3] = {
  "Red Gearset (36:1)",
  "Green Gearset (18:1)",
  "Blue Gearset (6:1)"
};