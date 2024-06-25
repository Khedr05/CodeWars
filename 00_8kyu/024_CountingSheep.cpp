/*
 * Level: 8 kyu
 * Name: Counting sheep...
 * Instructions:
 * Consider an array/list of sheep where some sheep may be missing from their place.
 * We need a function that counts the number of sheep present in the array (true means present).
 * 
 * For example,
 * [true,  true,  true,  false,
 *  true,  true,  true,  true,
 *  true,  false, true,  false,
 *  true,  false, false, true,
 *  true,  true,  true,  true,
 *  false, false, true,  true]
 * The correct answer would be 17.
 * 
 * Hint: Don't forget to check for bad values like null/undefined.
 */

#include <vector>
using namespace std;

// Function to count the number of sheep present in the array
int count_sheep(vector<bool> arr) {
    int counter = 0; // Initialize a counter to keep track of the number of sheep

    // Loop through each element in the array
    for (int i = 0; i < arr.size(); i++) {
        // If the current element is true, increment the counter
        if (arr[i]) {
            counter++;
        }
    }
    return counter; // Return the total number of sheep
}

/*
 * Sample Tests:
 * Describe(count_sheep_method) {
 *   It(array_one) {
 *     vector<bool> array1 = { true,  true,  true,  false,
 *                             true,  true,  true,  true,
 *                             true,  false, true,  false,
 *                             true,  false, false, true,
 *                             true,  true,  true,  true,
 *                             false, false, true,  true };
 *     Assert::That(count_sheep(array1), Equals(17));
 *   }
 * };
 */
