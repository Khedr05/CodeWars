/*
 * Level: 8 kyu
 * Name: Is the string uppercase?
 * Instructions:
 * Create a method to see whether the string is ALL CAPS.
 * 
 * Examples (input -> output):
 * "c" -> False
 * "C" -> True
 * "hello I AM DONALD" -> False
 * "HELLO I AM DONALD" -> True
 * "ACSKLDFJSgSKLDFJSKLDFJ" -> False
 * "ACSKLDFJSGSKLDFJSKLDFJ" -> True
 * 
 * Note:
 * In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter, so any string containing no letters at all is trivially considered to be in ALL CAPS.
 */

#include <string>
using namespace std;

// Function to check if the string is in all uppercase
bool is_uppercase(const string& s) {
    // Loop through each character in the string
    for (int i = 0; i < s.length(); i++) {
        // If the character is lowercase, return false
        if (islower(s[i])) {
            return false;
        }
    }
    // If no lowercase characters are found, return true
    return true;
}

/*
 * Sample Tests:
 * Describe(Is_UpperCase) {
 *   It(Basic_Tests) {
 *     Assert::That(is_uppercase("c"), Equals(false));
 *     Assert::That(is_uppercase("C"), Equals(true));
 *     Assert::That(is_uppercase("hello I AM DONALD"), Equals(false));
 *     Assert::That(is_uppercase("HELLO I AM DONALD"), Equals(true));
 *     Assert::That(is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ"), Equals(false));
 *     Assert::That(is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ"), Equals(true));
 *   }
 * };
 */
