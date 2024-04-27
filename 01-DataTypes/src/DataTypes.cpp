#include "DataTypes.h"

int multiplyInts(int a, int b){
    int answer = a * b;
    return answer;
}
float multiplyFloats(float a, float b){
    float answer = a * b;
    return answer;
}

//calculate the circumfrence using the radius
//return the circumference
//returns 0 if the radius is 0 or negative ie. invalid
float getCircumference(float radius){
    if(radius <= 0){
        return 0;
    }
    return 2*radius*M_PI;
}

float averageFloats(float a, float b, float c){
    return (a + b + c)/3.0;
}

int averageInts(int a, int b, int c){
    return (a + b + c)/3;
}

float getRPM(float rotations, float time_in_seconds){
    float timeInMins = time_in_seconds/60.0f;
    return rotations / timeInMins;
}

float getDistanceTraveled(float wheelRadius, float rotations, float duration_seconds){
    float rpm = getRPM(rotations, duration_seconds);
    float circumference = getCircumference(wheelRadius);
    float distance = circumference * rpm * duration_seconds / 60.0f;
    return distance;
}