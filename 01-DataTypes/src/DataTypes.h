/**
 * @file DataTypes.h
 * @author Aaron Bloch
 * @brief 
 * @version 0.1
 * @date 2024-04-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#include <cmath>


/**
 * @brief Multiplies param a with param b
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int multiplyInts(int a, int b);

/**
 * @brief Multiplies param a with param b
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float multiplyFloats(float a, float b);

/**
 * @brief Calculates the circumference given the radius of a circle.
 *  If the radius is less than or equal to 0, return 0 
 * 
 * @param radius 
 * @return float 
 */
float getCircumference(float radius);

/**
 * @brief Averages three values  
 * 
 * @param a 
 * @param b 
 * @param c 
 * @return float 
 */
float averageFloats(float a, float b, float c);

/**
 * @brief Averages three values
 * 
 * @param a 
 * @param b 
 * @param c 
 * @return int 
 */
int averageInts(int a, int b, int c);

/**
 * @brief Calculates RPM given rotation and time in seconds
 * 
 * @param rotation 
 * @param time_in_seconds 
 * @return float 
 */
float getRPM(float rotation, float time_in_seconds);

/**
 * @brief Calculates distance traveled given the wheel radius,
 *  rotations of that wheel, and time in seconds.
 * 
 * @param wheelRadius 
 * @param rotations 
 * @param duration_seconds 
 * @return float 
 */
float getDistanceTraveled(float wheelRadius, float rotations, float duration_seconds);