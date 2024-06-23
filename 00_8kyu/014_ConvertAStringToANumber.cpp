/*
 * Level: 8 kyu
 * Name: Convert a String to a Number
 * Instructions:
 * We need a function that can transform a string into a number. 
 * Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.
 * 
 * Examples:
 * "1234" --> 1234
 * "605"  --> 605
 * "1405" --> 1405
 * "-7" --> -7
 */

#include <string>
using namespace std;

// Function to convert a string to an integer
int string_to_number(const string& s) {
    int retVal = 0;    // Variable to store the result
    int start = 0;     // Starting index for iteration
    bool isNegative = false;  // Flag to check if the number is negative

    // Check if the number is negative
    if (s[0] == '-') {
        isNegative = true;  // Set the flag if negative
        start = 1;          // Start iteration from the next character
    }

    // Iterate over each character in the string
    for (int i = start; i < s.length(); i++) {
        retVal *= 10;           // Multiply the current result by 10
        retVal += s[i] - '0';   // Add the integer value of the current character
    }

    // If the number is negative, negate the result
    if (isNegative) {
        retVal = -retVal;
    }

    return retVal;  // Return the final result
}

/*
 * Simple Test:
 * Describe(stringToNumber)
 * {
 *     It(shouldWorkForTheExamples)
 *     {
 *         AssertThat(string_to_number("123456"), Is().EqualTo(123456));
 *         AssertThat(string_to_number("352605"), Is().EqualTo(352605));
 *         AssertThat(string_to_number("-321405"), Is().EqualTo(-321405));
 *         AssertThat(string_to_number("-7"), Is().EqualTo(-7));
 *         AssertThat(string_to_number("0"), Is().EqualTo(0));
 *         AssertThat(string_to_number("-0"), Is().EqualTo(0));
 *     }
 * };
 */
