/** @author Rahul Karanam
 *  @brief This file contains the implementation of a PID Controller.
 *  @file include/PID.hpp
 *  @date 10/01/2021
 *  @copyright Rahul Karanam
 *  

*/

/** This Class implements the PID controller.
 *  
 */


class PID{
    private:
        /** kp - Proportional Constant */
        const double kp; 
        /**  ki - Integral Constant     */
        const double ki;
        /**  kd - Derivative Constant   */
        const double kd;
        /** period - The time period */
        const double period;
         /**
          * prev_error - Previous state error */
         double prev_error;
        
    
    public:
        /** This constructor has the inputs of kp,ki,kd and period.
         * @param[in] kp Proportional Constant
         * @param[in] ki Integral Constant
         * @param[in] kd Derivative Constant
         * @param[in] period time period
         */
        PID(double kp,double ki,double kd,double period);

    /** This method will compute the actual velocity given the desired velocity.
         *  @param[in] actual actual velocity
         *  @param[in] desired target setpoint
         *  @return the new velocity.
         */
    double computePID(double actual,double desired);
};