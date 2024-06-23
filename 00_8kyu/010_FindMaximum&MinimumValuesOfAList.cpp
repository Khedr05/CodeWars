/*
 * Level: 8 kyu
 * Name: Find Maximum and Minimum Values of a List
 * Instructions:
 * Your task is to make two functions (max and min) that receive a list of integers as input, and return the largest and lowest number in that list, respectively.
 * 
 * Examples (Input -> Output):
 * [4,6,2,1,9,63,-134,566] -> max = 566, min = -134
 * [-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56
 * [42, 54, 65, 87, 0] -> min = 0, max = 87
 * [5] -> min = 5, max = 5
 * 
 * Notes:
 * You may consider that there will not be any empty arrays/vectors.
 */

#include <vector>
using namespace std;

// Function to find the minimum value in a list of integers
int min(vector<int> list) {
    int minValue = list[0];
    // Loop through each element in the list
    for (int i = 1; i < list.size(); i++) {
        // Update minValue if the current element is smaller
        if (list[i] < minValue) {
            minValue = list[i];
        }
    }
    return minValue;
}

// Function to find the maximum value in a list of integers
int max(vector<int> list) {
    int maxValue = list[0];
    // Loop through each element in the list
    for (int i = 1; i < list.size(); i++) {
        // Update maxValue if the current element is larger
        if (list[i] > maxValue) {
            maxValue = list[i];
        }
    }
    return maxValue;
}

/*
 * Simple Test:
 * Describe(Test) {
 *     It(Examples) {
 *         using V = std::vector<int>;
 *         Assert::That(min(V{-52, 56, 30, 29, -54, 0, -110}), Equals(-110));
 *         Assert::That(min(V{42, 54, 65, 87, 0}), Equals(0));
 *         Assert::That(max(V{4, 6, 2, 1, 9, 63, -134, 566}), Equals(566));
 *         Assert::That(max(V{5}), Equals(5));
 *     }
 * };
 */

