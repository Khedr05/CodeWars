/*
 * Level: 8 kyu
 * Name: Invert Values
 * Instructions:
 * Given a set of numbers, return the additive inverse of each.
 * Each positive becomes negative, and the negatives become positive.
 * 
 * Examples:
 * [1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
 * [1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
 * [] --> []
 */

#include <iostream>
#include <vector>
using namespace std;

// Function to invert the values in a vector
vector<int> invert(vector<int> values) {
    // Loop through each element in the vector and invert its sign
    for (int i = 0; i < values.size(); i++) {
        values[i] *= -1;
    }
    return values;
}

/*
 * Simple Test:
 * Describe(test_invert) {
 *     It(should_pass_some_basic_tests) {
 *         Assert::That(invert({1, 2, 3, 4, 5}), Equals(std::vector<int>{-1, -2, -3, -4, -5}));
 *         Assert::That(invert({1, -2, 3, -4, 5}), Equals(std::vector<int>{-1, 2, -3, 4, -5}));
 *         Assert::That(invert({}), Equals(std::vector<int>{}));
 *     }
 * };
 */

