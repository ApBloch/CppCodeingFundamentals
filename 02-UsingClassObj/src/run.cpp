#include <iostream>
#include "Motor.h"

int run() {
    MotorV5 motor(1, 1, (motor_gearset_e)2);  

    printf("Motor Encoder Value Before Move: %lf\r\n", motor.get_position());
    motor.move(90);
    motor.update(500);
    printf("Motor Encoder Value After Move: %lf\r\n", motor.get_position());

    return 1;
}