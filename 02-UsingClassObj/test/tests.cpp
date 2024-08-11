#include <cstdlib>
#include <iostream>
#include <limits>
#include <algorithm>
#include <cmath>

#include "UsingClassObj.h"
#include "UsingClassObjAnswer.h"

using namespace std;

bool areEqual(float a, float b, float epsilon) {
    return (fabs(a - b) <= epsilon * std::max(1.0f, std::max(a, b)));
}

void test_constructRedMotor(){
    MotorV5 test(1);
    constructRedMotor(&test);
    MotorV5 answer(1);
    constructRedMotor_answer(&answer);
    if(test.get_gearset() != answer.get_gearset()){
        cout << "\tconstructRedMotor set gearing to : " << gearAsString[test.get_gearset()]<< endl;
        cout << "\tCorrect Gear Set : " << gearAsString[answer.get_gearset()]<<endl;
        exit(1);
    }
}

void test_constructMotorWithPortNumber(){
    MotorV5 test(1);
    MotorV5 answer(1);
    for(int i = -15; i < 127; i++){
        constructMotorWithPortNumber(&test, i);
        constructMotorWithPortNumber_answer(&answer, i);
        if(test.get_port_number() != answer.get_port_number()){
            cout << "\tIncorrect Port Number" << endl;
            cout << "\tPort Number Set to : " << test.get_port_number()
                 << " Correct Port Number : "<< answer.get_port_number()<< endl;
            exit(1);
        }
    }
}

void test_constructMotorWithOppositeDirection(){
    MotorV5 test(1);
    MotorV5 answer(1);
    constructMotorWithOppositeDirection(&test);
    constructMotorWithOppositeDirection_answer(&answer);
    if(test.getIsReversed() != answer.getIsReversed()){
        cout << "\tMotor Not Set To Reverse Direction" << endl;
        exit(1);
    }
}

void test_setMotorToMaxVoltage(){
    MotorV5 test(1);
    MotorV5 answer(1);
    setMotorToMaxVoltage(&test);
    setMotorToMaxVoltage_answer(&answer);
    if(test.get_voltage() != answer.get_voltage()){
        cout << "\tMotor Not Set To Max Voltage" << endl;
        cout << "\tMotor Voltage set to : " << test.get_voltage()<< endl;
        exit(1);
    }
}

void test_setMotorToVoltage(){
    MotorV5 test(1);
    MotorV5 answer(1);
    for(int i = -127;i < 127; i++){
        setMotorToVoltage(&test, i);
        setMotorToVoltage_answer(&answer, i);
        if(test.get_voltage() != answer.get_voltage()){
            cout << "\tMotor NOT set to correct Voltage" << endl;
            cout << "\tMotor Voltage set to : " << test.get_voltage()<< endl;
            cout << "\tExpected Voltage : " << answer.get_voltage() << endl;
            exit(1);
        }
    }

}

void test_spinMotorWithAtMaxVel(){
    MotorV5 test(1);
    MotorV5 answer(1);
    spinMotorWithAtMaxVel(&test);
    spinMotorWithAtMaxVel_answer(&answer);
    if(!areEqual(test.get_position(), answer.get_position(), std::numeric_limits<double>::epsilon())){
        cout << "\tMotor Spun Different Ammount" << endl;
        cout << "\tPosition spun to : " << test.get_position() << endl;
        cout << "\tExpected position : " << answer.get_position() << endl;
        exit(1);
    }
}

void test_spinMotorForwardAndBack(){
    MotorV5 test(1);
    MotorV5 answer(1);
    spinMotorForwardAndBack(&test);
    spinMotorForwardAndBack_answer(&answer);
    if(!areEqual(test.get_position(), answer.get_position(), std::numeric_limits<double>::epsilon())){
        cout << "\tMotor Spun Different Ammount" << endl;
        cout << "\tPosition spun to : " << test.get_position() << endl;
        cout << "\tExpected position : " << answer.get_position() << endl;
        exit(1);
    }
}

void test_spinMotorForEncoderCounts(){
    MotorV5 test(1);
    MotorV5 answer(1);
    for(int i = 0; i < 10000; i+=100){
        spinMotorForEncoderCounts(&test, i);
        spinMotorForEncoderCounts_answer(&answer, i);
        if(!areEqual(test.get_position(), answer.get_position(), std::numeric_limits<double>::epsilon())){
            cout << "\tMotor Spun Different Ammount" << endl;
            cout << "\tPosition spun to : " << test.get_position() << endl;
            cout << "\tExpected position : " << answer.get_position() << endl;
            exit(1);
        }
    }
}

void test_calculateFeetPerSecFromGearing(){
    const float testCases[10] = {
        1.4,
        0,
        -1.5,
        3.5,
        1000,
        300,
        1.23243533,
        3.14133,
        99944.223,
        3.9890823
    };
    float test = __FLT_MAX__;
    float answer = __FLT_MAX__;
    for(int i = 0; i < 10;i++){
        test = calculateFeetPerSecFromGearing(testCases[i]);
        answer = calculateFeetPerSecFromGearing_answer(testCases[i]);
        if(!areEqual(test, answer, std::numeric_limits<float>::epsilon())){
            cout << "\tFeet Per Second Calculation Wrong!" << endl;
            cout << "\tcalculateFeetPerSecFromGearing(" << testCases[i] << ")"
            << " Returned: " << test << endl;
            cout << "\tExpected Result: " << answer << endl;
            exit(1);
        }
        float test = __FLT_MAX__;
        float answer = __FLT_MAX__;
    }
}