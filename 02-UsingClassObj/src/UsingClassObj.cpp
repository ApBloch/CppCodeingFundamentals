#include "UsingClassObj.h"
#include <cmath>
#include <cstring>

void constructBlueMotor(MotorV5* rtn){
    // Use as example, Nothing is wrong here
    MotorV5 myMotor(1, false, E_MOTOR_GEAR_BLUE);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructRedMotor(MotorV5* rtn){
    // Correct function
    MotorV5 myMotor(1, false, E_MOTOR_GEAR_BLUE);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructMotorWithPortNumber(MotorV5* rtn, int portNumber){
    // correct function
    // If portNumber is negative then set port number to 0
    MotorV5 myMotor(1483, false, E_MOTOR_GEAR_RED);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructMotorWithOppositeDirection(MotorV5* rtn){
    // correct function
    MotorV5 myMotor(1, false, E_MOTOR_GEAR_RED);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void setMotorToMaxVoltage(MotorV5* rtn){
    // look into the different functions of the motor class
    MotorV5 myMotor(1);
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void setMotorToVoltage(MotorV5* rtn, int velocity){
    // look into the different functions of the motor class
    MotorV5 myMotor(1);
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorWithAtMaxVel(MotorV5* rtn){
    // look into the update function
    int timeDelta = 1000; //use this timeDelta
    MotorV5 myMotor(1);
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorForwardAndBack(MotorV5* rtn){
    MotorV5 myMotor(1); 
    //spin motor full speed forward for 1 sec
    //spin motor full speed backward for 2 sec
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorForEncoderCounts(MotorV5* rtn, int encoderCounts){
    // think about using loops
    int timeDelta = 10; //use this timeDelta
    int voltage = 100;  //use this voltage
    MotorV5 myMotor(1);
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));

}
float calculateFeetPerSecFromGearing(float wheelDiameter_in){
    //fun maths
    MotorV5 myMotor(1, true, E_MOTOR_GEAR_RED); //use this motor's setup
    // <<<<<< Your Code Below >>>>>>



    // <<<<<< End Your Code >>>>>>

    return 1;   //return your answer here
}