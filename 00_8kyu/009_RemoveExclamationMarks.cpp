/*
 * Level: 8 kyu
 * Name: Remove Exclamation Marks
 * Instructions:
 * Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
 */

#include <string>
using namespace std;

// Function to remove all exclamation marks from a given string
string removeExclamationMarks(string str) {
    string newStr;
    
    // Loop through each character in the input string
    for (int i = 0; i < str.length(); i++) {
        // Append the character to newStr if it is not an exclamation mark
        if (str[i] != '!') {
            newStr += str[i];
        }
    }
    
    return newStr;
}

/*
 * Simple Test:
 * Describe(RemoveExclamationMarks) {
 *     It(BasicTests) {
 *         Assert::That(removeExclamationMarks("Hello World!"), Equals("Hello World"));
 *         Assert::That(removeExclamationMarks("Hello World!!!"), Equals("Hello World"));
 *         Assert::That(removeExclamationMarks("Hi! Hello!"), Equals("Hi Hello"));
 *         Assert::That(removeExclamationMarks("Hi!!! Hello!"), Equals("Hi Hello"));
 *         Assert::That(removeExclamationMarks("Hi! He!l!lo!"), Equals("Hi Hello"));
 *     }
 * };
 */

