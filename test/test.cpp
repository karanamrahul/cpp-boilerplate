#include <gtest/gtest.h>
#include "include/PID.hpp"


TEST(pid,compute){
    PID pid(0.1,0.2,0.005,0.01);
    EXPECT_EQ(-0.602, pid.computePID(51,52));
    EXPECT_EQ(0.903,pid.computePID(14,13));
    EXPEPT_EQ(-0.4515,pid.computePID(10,10)); 
}