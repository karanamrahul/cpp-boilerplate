/**
 * @file PID.cpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief PID Class Implementation
 * @version 2.0
 * @date 2021-10-02
 * @copyright Copyright (c) 2021
 * 
 */

#include "../include/PID.hpp"

/**
 * @brief Default constructor for new PID object
 */
PID::PID() {
}

/**
 * @brief Parameterized constuctor for new PID object
 * @param kp - Proportional Gain
 * @param ki - Integral Gain
 * @param kd - Derivative Gain
 * @param period - Total Time
 */
PID::PID(double kp, double ki, double kd, double period) :
         kp(kp), ki(ki), kd(kd), period(period) {}

/**
 * @brief Method to drive the output to the desired value
 * @param actual - Actual Value
 * @param desired - Desired Value
 * @return double 
 */
double PID::computePID(double actual, double desired) {
    /* error and individual controller outputs */
    double error, cumulative_error, output_p, output_i, output_d;
    double integral_error = 0;

    /* run the controller for the given period */
    for (int i = 0; i <= period; i++) {
        error = desired - actual;

        output_p = kp * error;  // o/p of Proportional Controller

        output_d = kd * (error - prev_error);  // o/p of Derivative Controller

        integral_error += error;
        output_i = ki * integral_error;  // o/p of Integral Controller

        actual = output_p + output_i + output_d;  // total o/p

        prev_error = error;
    }
    return actual;
}

/**
 * @brief Destroy the PID object
 */
PID::~PID() {
}
