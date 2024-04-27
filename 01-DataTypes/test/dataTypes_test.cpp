#include "DataTypes.h"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <algorithm>


bool areEqual(float a, float b, float epsilon) {
    return (fabs(a - b) <= epsilon * std::max(1.0f, std::max(a, b)));
}

void testMultiplyInts(){
    if(multiplyInts(5, 13) != 65){
        std::cout <<"function multiplyInts(5,13) returned: " << multiplyInts(5,13) << std::endl;
        std::cout <<"expected: " << (5*13) << std::endl;
        std::exit(1);
    }
    if(multiplyInts(127, -15) != -1905){
        std::cout <<"function multiplyInts(127,-15) returned: " << multiplyInts(127,-15) << std::endl;
        std::cout <<"expected: " << (127*-15) << std::endl;
        std::exit(1);
    }
    if(multiplyInts(10000, 90) != 900000){
        std::cout <<"function multiplyInts(10000,90) returned: " << multiplyInts(10000,90) << std::endl;
        std::cout <<"expected: " << (10000*90) << std::endl;
        std::exit(1);
    }
}

void testMultiplyFloats(){
    if(!areEqual(multiplyFloats(17.234, 142.456), ((17.234 * 142.456)), std::numeric_limits<float>::epsilon())){
        std::cout <<"multiplyFloats(17.234, 142.456) returned: " << multiplyFloats(17.234, 142.456) << std::endl;
        std::cout <<"expected: " << (17.234 * 142.456) << std::endl;
        std::exit(1);
    }
}

void testGetCircumference(float radius){
    float returnedValue = getCircumference(radius);
    float expectedValue = 2*radius*M_PI;
    if(expectedValue < 0) expectedValue = 0;
    if(!areEqual(returnedValue, expectedValue, std::numeric_limits<float>::epsilon())){
        std::cout <<"function getCircumference(" << radius <<") returned: " << returnedValue << std::endl;
        std::cout <<"expected: " << expectedValue << std::endl;
        std::exit(1);
    }
}

void testAverageFloats(float a, float b, float c){
    float value = averageFloats(a, b, c);
    float expectedValue = (a+b+c)/3.0f;
    if(!areEqual(value, expectedValue, std::numeric_limits<float>::epsilon())){
        std::cout <<"function averageFloats(" << a << ", " << b << ", " << c <<") returned: " << value << std::endl;
        std::cout <<"expected: " << expectedValue << std::endl;
        std::exit(1);
    }
}

void testAverageInts(int a, int b, int c){
    int value = averageFloats(a, b, c);
    int expectedValue = (a+b+c)/3;
    if(value != expectedValue){
        std::cout <<"function averageInts(" << a<<", " << b << ", " << c <<") returned: " << value << std::endl;
        std::cout <<"expected: " << expectedValue << std::endl;
        std::exit(1);
    }
}
void testGetRPM(float rotations, float time_in_seconds){
    float value = getRPM(rotations, time_in_seconds);
    float expectedValue = rotations / (time_in_seconds / 60.0f);
    if(!areEqual(value, expectedValue, std::numeric_limits<float>::epsilon())){
        std::cout <<"function getRPM(" << rotations <<", "<< time_in_seconds <<") returned: " << value << std::endl;
        std::cout <<"expected: " << expectedValue << std::endl;
        std::exit(1);
    }
}

void testGetDistance(float wheelRadius, float rotations, float duration_seconds){
    float value = getDistanceTraveled(wheelRadius, rotations, duration_seconds);
    float expectedValue = (rotations / (duration_seconds/ 60.0f)) * (wheelRadius * 2 * M_PI) *duration_seconds / 60.0f  ;
    if(!areEqual(value, expectedValue, std::numeric_limits<float>::epsilon())){
        std::cout <<"function getDistance(" << wheelRadius << ", " << rotations << ", "<< duration_seconds <<") returned: " << value << std::endl;
        std::cout <<"expected: " << expectedValue << std::endl;
        std::exit(1);
    }
}

