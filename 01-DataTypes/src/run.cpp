#include <iostream>
#include "DataTypes.h"

int run() {
    float average = averageFloats(1, 15.4, 40.2);
    int averageInt = averageInts(4, 6, 8);

    std::cout << "Average Float: " << average << std::endl;
    std::cout << "Average Int: " << averageInt << std::endl;
}