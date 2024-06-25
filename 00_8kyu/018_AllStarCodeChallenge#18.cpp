/*
 * Level: 8 kyu
 * Name: All Star Code Challenge #18
 * Instructions:
 * Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.
 * If no occurrences can be found, a count of 0 should be returned.
 * 
 * Examples:
 * strCount("Hello", 'o')  =>  1
 * strCount("Hello", 'l')  =>  2
 * strCount("", 'z')       =>  0
 * Notes:
 * The first argument can be an empty string.
 * In languages with no distinct character data type, the second argument will be a string of length 1.
 */

#include <string>
using namespace std;

// Function to count occurrences of a character in a string
unsigned int strCount(const string& word, char letter) {
    unsigned int counter = 0;  // Initialize a counter to store the number of occurrences

    // Loop through each character in the input string word
    for (int i = 0; i < word.length(); i++) {
        // Check if the current character matches the given letter
        if (word[i] == letter)
            counter++;  // Increment the counter if a match is found
    }
    
    return counter;  // Return the total count of occurrences
}

/*
 * Sample Tests:
 * Describe(StrCount) {
 *     It(BasicTests) {
 *         Assert::That(strCount("Hello", 'o'), Equals(1));  // Test case 1: "Hello" contains 'o' once
 *         Assert::That(strCount("Hello", 'l'), Equals(2));  // Test case 2: "Hello" contains 'l' twice
 *         Assert::That(strCount("Hello", 'q'), Equals(0));  // Test case 3: "Hello" contains 'q' zero times
 *         Assert::That(strCount("Pippi", 'p'), Equals(2));  // Test case 4: "Pippi" contains 'p' twice
 *         Assert::That(strCount("", 'l'), Equals(0));       // Test case 5: Empty string contains 'l' zero times
 *     }
 * };
 */
