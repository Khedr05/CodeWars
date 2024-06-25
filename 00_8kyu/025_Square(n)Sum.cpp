/*
 * Level: 8 kyu
 * Name: Square(n) Sum
 * Instructions:
 * Complete the square sum function so that it squares each number passed into it
 * and then sums the results together.
 * 
 * For example, for [1, 2, 2] it should return 9 because 
 * 1^2 + 2^2 + 2^2 = 9
 */

#include <vector>
using namespace std;

// Function to calculate the square sum of numbers in a vector
int square_sum(const vector<int>& numbers) {
    int sum = 0; // Initialize sum to store the result

    // Loop through each number in the vector
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i] * numbers[i]; // Square each number and add to sum
    }
    
    return sum; // Return the calculated sum
}

/*
 * Sample Tests:
 * Describe(test_square_sum) {
 *   It(should_pass_some_basic_tests) {
 *     Assert::That(square_sum({1, 2}), Equals(5));
 *     Assert::That(square_sum({0, 3, 4, 5}), Equals(50));
 *     Assert::That(square_sum({}), Equals(0));
 *   }
 * };
 */
