/*
 * Level: 8 kyu
 * Name: Simple Multiplication
 * Instructions:
 * This kata is about multiplying a given number by eight if it is an even number 
 * and by nine otherwise.
 */

#include <iostream>
using namespace std;

// Function to multiply a given number by eight if it is even, and by nine otherwise
int simpleMultiplication(int a) {
    // Check if the number is even
    // If even, multiply by 8
    // If odd, multiply by 9
    return (a % 2 == 0) ? a * 8 : a * 9;
}

/*
 * Simple Test:
 * Describe(simpleMultiplicationTest)
 * {
 *     It(multiply)
 *     {
 *         Assert::That(simpleMultiplication(2), Equals(16));
 *         Assert::That(simpleMultiplication(1), Equals(9));
 *         Assert::That(simpleMultiplication(8), Equals(64));
 *         Assert::That(simpleMultiplication(4), Equals(32));
 *         Assert::That(simpleMultiplication(5), Equals(45));
 *     }
 * };
 */

