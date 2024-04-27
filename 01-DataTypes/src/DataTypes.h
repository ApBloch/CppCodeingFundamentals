#pragma once
#include <cmath>

/**
 * @brief multiplies parameter a with parameter b and returns the result
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int multiplyInts(int a, int b);
float multiplyFloats(float a, float b);

float getCircumference(float radius);

float averageFloats(float a, float b, float c);
int averageInts(int a, int b, int c);

float getRPM(float rotation, float time_in_seconds);
float getDistanceTraveled(float wheelRadius, float rotations, float duration_seconds);