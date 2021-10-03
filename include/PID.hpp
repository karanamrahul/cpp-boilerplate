/**
 * @file PID.hpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief PID Class header file
 * @version 2.0
 * @date 2021-10-02
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

/**
 * @brief PID class with private gain variables and public compute method
 * @param kp - Proportional Gain
 * @param ki - Integral Gain
 * @param kd - Derivative Gain
 * @param period - Total Time
 * @param prev_error - Error of the previous iteration
 */
class PID{
 private:
    /* default attributes */
    const double kp = 0.3;
    const double ki = 0.05;
    const double kd = 0.2;
    const double period = 100;
    double prev_error;

 public:
     PID();

    /** This constructor has the inputs of kp, ki, kd and period.
     * @param[in] kp - Proportional Constant
     * @param[in] ki - Integral Constant
     * @param[in] kd - Derivative Constant
     * @param[in] period - Time Period
     */
    PID(double kp, double ki, double kd, double period);

    /** This method will compute the actual value given the desired value.
     *  @param[in] actual - Actual Value
     *  @param[in] desired - Target Setpoint
     *  @return double
     */
    double computePID(double actual, double desired);

    /**
     * @brief Destroy the PID object
     */
    ~PID();
};

#endif  // INCLUDE_PID_HPP_
