/**
 * @file Motor.h
 * @author Aaron Bloch
 * @brief Class to emulate a Vex V5 motor
 * @version 0.1
 * @date 2024-08-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include <stdint.h>
#include <limits>
#include <string>

//taken from pros website
typedef enum motor_gearset_e {
  E_MOTOR_GEARSET_36 = 0, // 36:1
  E_MOTOR_GEAR_RED = E_MOTOR_GEARSET_36, // Red gear set
  E_MOTOR_GEAR_100 = E_MOTOR_GEARSET_36, // 100 RPM
  E_MOTOR_GEARSET_18 = 1, // 18:1
  E_MOTOR_GEAR_GREEN = E_MOTOR_GEARSET_18, // Green gear set
  E_MOTOR_GEAR_200 = E_MOTOR_GEARSET_18, // 200 RPM
  E_MOTOR_GEARSET_06 = 2, // 6:1
  E_MOTOR_GEAR_BLUE  = E_MOTOR_GEARSET_06, // Blue gear set
  E_MOTOR_GEAR_600 = E_MOTOR_GEARSET_06, // 600 RPM
  E_MOTOR_GEARSET_INVALID = INT32_MAX
} motor_gearset_e_t;


extern std::string gearAsString[3];

#define MIN_VOLTAGE -127
#define MAX_VOLTAGE 127

class MotorV5{
    public:
        MotorV5(int portNumber, bool isReversed,  motor_gearset_e_t _gearSet);
        MotorV5(int portNumber, bool isReversed);
        MotorV5(int portNumber);

        void update(int timeDelta);
        void move(int voltage);

        int get_voltage();
        double get_position();
        void tare_position();

        int getCountsPerRev();

        motor_gearset_e get_gearset();
        void set_gearset(motor_gearset_e _gearset);

        int get_port_number();
        void set_port_number(int portNumber);

        int getRPMFromGearing(motor_gearset_e gear);

        bool getIsReversed();

    private:
        motor_gearset_e gearSet;
        bool isReversed;     // 1 is reversed, 0 is not reversed
        int portNumber;     //basically not used...
        double encoderCounts;
        int voltage;

        int getCountsPerRevFromGearing(motor_gearset_e gear);
};