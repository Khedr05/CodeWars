/*
 * Level: 8 kyu
 * Name: Swap Values
 * Instructions:
 * I would like to be able to pass an array with two elements to my swapValues function 
 * to swap the values. However, it appears that the values aren't changing.
 * Can you figure out what's wrong here?
 */

#include <utility> // Include the utility header for std::swap

/*
 * Function to swap values in a pair
 */
std::pair<int, int> swap_values(std::pair<int, int> values) {
    
    //   int temp = 0;
    //   temp = values.first;
    //   values.first = values.second;
    //   values.second = temp;

    // Use std::swap to swap the two elements of the pair
    std::swap(values.first, values.second);
    // Return the modified pair
    return values;
}

/*
 * Sample Tests:
 * 
 * Describe(Sample_cases) {
 *   It(Small_numbers) {
 *     Assert::That(swap_values(std::pair<int, int>{1, 2}), Equals(std::pair<int, int>{2, 1}));
 *   }
 *   It(Bigger_numbers) {
 *     Assert::That(swap_values(std::pair<int, int>{14958573, 222032399}), Equals(std::pair<int, int>{222032399, 14958573}));
 *   }
 * };
 */
