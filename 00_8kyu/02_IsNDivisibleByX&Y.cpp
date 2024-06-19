/*
 * Level: 8 kyu
 * Name: Is n divisible by x and y?
 * Instructions:
 * Create a function that checks if a number n is divisible by two numbers x AND y. 
 * All inputs are positive, non-zero numbers.
 * 
 * Examples:
 * 1) n =   3, x = 1, y = 3 =>  true because   3 is divisible by 1 and 3
 * 2) n =  12, x = 2, y = 6 =>  true because  12 is divisible by 2 and 6
 * 3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3
 * 4) n =  12, x = 7, y = 5 => false because  12 is neither divisible by 7 nor 5
 */

#include <iostream>
using namespace std;

// Function to check if a number n is divisible by both x and y
bool isDivisible(int n, int x, int y) {
    // Check if n is divisible by both x and y
    return (n % x == 0) && (n % y == 0);
}

/*
 * Simple Test:
 * Describe(IsDivisible) {
 *   It(BasicTests) {
 *     Assert::That(isDivisible(3, 3, 4), Equals(false));
 *     Assert::That(isDivisible(12, 3, 4), Equals(true));
 *     Assert::That(isDivisible(8, 3, 4), Equals(false));
 *     Assert::That(isDivisible(48, 3, 4), Equals(true));
 *     Assert::That(isDivisible(100, 5, 10), Equals(true));
 *     Assert::That(isDivisible(100, 5, 3), Equals(false));
 *     Assert::That(isDivisible(4, 4, 2), Equals(true));
 *     Assert::That(isDivisible(5, 2, 3), Equals(false));
 *     Assert::That(isDivisible(17, 17, 17), Equals(true));
 *     Assert::That(isDivisible(17, 1, 17), Equals(true));
 *   }
 * };
 */

