/*
 * Level: 8 kyu
 * Name: Will you make it?
 * Instructions:
 * You were camping with your friends far away from home, but when it's time to go back, you realize that your fuel is running out and the nearest pump is 50 miles away! 
 * You know that on average, your car runs on about 25 miles per gallon. There are 2 gallons left.
 * Considering these factors, write a function that tells you if it is possible to get to the pump or not.
 * Function should return true if it is possible and false if not.
 * 
 * Examples:
 * zero_fuel(50, 25, 2) == true
 * zero_fuel(100, 50, 1) == false
 */

#include <cstdint>
using namespace std;

// Function to determine if it's possible to reach the pump
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left) {
    return distance_to_pump <= (fuel_left * mpg);  // Check if the distance to pump is less than or equal to the maximum distance the car can travel
}

/*
 * Sample Tests:
 * Describe(zero_fuel_function) {
 *   It(should_pass_sample_tests) {
 *     Assert::That(zero_fuel(50, 25, 2), Equals(true));
 *     Assert::That(zero_fuel(100, 50, 1), Equals(false));
 *   }
 * };
 */
