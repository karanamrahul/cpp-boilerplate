/**
 * @file main.cpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief The program implements a PID controller for the input parameters
 * @version 2.0
 * @date 2021-10-02
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "../include/PID.hpp"

using std::endl;

int main() {
    /* gains and value variables */
    double Kp, Kd, Ki, actual_val, desired_val;

    /* object of PID class and taking inputs */
    PID pid;
    std::cout << " Please enter proportional gain, integral gain, derivative"
                  " gain and time step : " << endl;
    std::cin >> Kp >> Ki >> Kd;

    std::cout << " Please enter the desired velocity:" << endl;
    std::cin >> desired_val;

    std::cout << " Please enter the initial actual velocity:" << endl;
    std::cin >> actual_val;

    /* call the controller to get the final corrected value*/
    double final_val = pid.computePID(actual_val, desired_val);
    std::cout<< " Final value is : " << final_val << " units " << endl;

    return 0;
}
