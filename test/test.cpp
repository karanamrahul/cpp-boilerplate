/**
 * @file test.cpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief Unit tests for PID Class to test the methods
 * @version 2.0
 * @date 2021-10-02
 * @copyright Copyright (c) 2021
 * 
 */

#include <gtest/gtest.h>
#include "../include/PID.hpp"

/**
 * @brief Construct a new TEST object
 */
TEST(pid, compute) {
    /* Test Object pid */
    PID pid(0.1, 0.2, 0.005, 50);

    /* Expect velocity to reach 40 */
    EXPECT_NEAR(40, pid.computePID(25, 40), 0.1);

    /* Expect velocity to reach 26 */
    EXPECT_NEAR(25, pid.computePID(25, 25), 0.1);

    /* Expect velocity to reach 20 */
    EXPECT_NEAR(20, pid.computePID(25, 20), 0.1);
}

