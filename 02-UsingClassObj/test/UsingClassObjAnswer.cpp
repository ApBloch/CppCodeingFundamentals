#include "UsingClassObjAnswer.h"
#include <cmath>
#include <cstring>

void constructBlueMotor_answer(MotorV5* rtn){
    MotorV5 myMotor(1, false, E_MOTOR_GEAR_BLUE);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructRedMotor_answer(MotorV5* rtn){
    MotorV5 myMotor(1, false, E_MOTOR_GEAR_RED);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructMotorWithPortNumber_answer(MotorV5* rtn, int portNumber){
    if(portNumber < 0)
    {
        portNumber = 0;
    }
    MotorV5 myMotor(portNumber, false, E_MOTOR_GEAR_RED);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void constructMotorWithOppositeDirection_answer(MotorV5* rtn){
    MotorV5 myMotor(1, true, E_MOTOR_GEAR_RED);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void setMotorToMaxVoltage_answer(MotorV5* rtn){
    MotorV5 myMotor(1);
    myMotor.move(127);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void setMotorToVoltage_answer(MotorV5* rtn, int voltage){
    MotorV5 myMotor(1);
    myMotor.move(voltage);
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorWithAtMaxVel_answer(MotorV5* rtn){
    int timeDelta = 1000; //use this timeDelta
    MotorV5 myMotor(1);

    myMotor.move(127);
    myMotor.update(timeDelta);
    
    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorForwardAndBack_answer(MotorV5* rtn){
    MotorV5 myMotor(1); 
    //spin motor full speed forward for 1 sec
    //spin motor full speed backward for 2 sec

    myMotor.move(127);
    myMotor.update(1000);
    myMotor.move(-127);
    myMotor.update(2000);

    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

void spinMotorForEncoderCounts_answer(MotorV5* rtn, int encoderCounts){
    int timeDelta = 10; //use this timeDelta
    int voltage = 100;  //use this voltage
    MotorV5 myMotor(1);

    myMotor.tare_position();
    myMotor.move(voltage);
    while(myMotor.get_position() < encoderCounts){
        myMotor.update(timeDelta);
    }

    std::memcpy(rtn, &myMotor, sizeof(MotorV5));
}

float calculateFeetPerSecFromGearing_answer(float wheelDiameter_in){
    MotorV5 myMotor(1, true, E_MOTOR_GEAR_RED); //use this motor's setup

    if(wheelDiameter_in  <= 0){
        return 0;
    }
    motor_gearset_e gearset = myMotor.get_gearset();
    int rpm = myMotor.getRPMFromGearing(gearset);
    float circumference = M_PI * wheelDiameter_in;
    float fps = rpm * (1/60.0) * (1/12.0) * circumference;

    return fps;
}

