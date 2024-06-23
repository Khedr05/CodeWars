/*
 * Level: 8 kyu
 * Name: Beginner - Reduce but Grow
 * Instructions:
 * Given a non-empty array of integers, return the result of multiplying the values together in order.
 * 
 * Example:
 * [1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
 */

#include <vector>
using namespace std;

// Function to multiply all elements of the vector
int grow(vector<int> nums) {
    int retVal = 1;  // Initialize return value to 1
    for(int i = 0; i < nums.size(); i++) {  // Loop through each element in the vector
        retVal *= nums[i];  // Multiply the current element with the return value
    }
    return retVal;  // Return the final product
}

/*
 * Simple Test:
 * #include <vector>
 * using vec = std::vector<int>;
 * 
 * Describe(ReduceGrow) {
 *   It(BasicTests) {
 *     Assert::That(grow(vec{1, 2, 3}), Equals(6));
 *     Assert::That(grow(vec{4, 1, 1, 1, 4}), Equals(16));
 *     Assert::That(grow(vec{2, 2, 2, 2, 2, 2}), Equals(64));
 *   }
 * };
 */
