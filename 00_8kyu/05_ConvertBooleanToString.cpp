/*
 * Level: 8 kyu
 * Name: Convert a Boolean to a String
 * Instructions:
 * Implement a function which converts the given boolean value into its string representation.
 * 
 * Note: Only valid inputs will be given.
 */

#include <iostream>
#include <string>
using namespace std;

// Function to convert a boolean value to its string representation
string boolean_to_string(bool b) {
    // Return "true" if b is true, otherwise return "false"
    return b ? "true" : "false";
}

/*
 * Simple Test:
 * Describe(boolean_to_string_method) {
 *     It(basic_tests) {
 *         Assert::That(boolean_to_string(true), Equals("true"));
 *         Assert::That(boolean_to_string(false), Equals("false"));
 *         Assert::That(boolean_to_string(false), Equals("false"));
 *         Assert::That(boolean_to_string(true), Equals("true"));
 *     }
 * };
 */

