/*
 * Level: 8 kyu
 * Name: String repeat
 * Instructions:
 * Write a function called repeat_str which repeats the given string str exactly n times.
 * 
 * Examples:
 * repeat_str(3, "*") --> "***"
 * repeat_str(5, "#") --> "#####"
 * repeat_str(2, "ha ") --> "ha ha "
 */

#include <string>
using namespace std;

// Function to repeat a string exactly n times
string repeat_str(size_t repeat, const string& str) 
{
    string newStr = "";  // Initialize an empty string to store the repeated string
    
    // Loop from 0 to repeat-1 to concatenate the string str to newStr
    for (int i = 0; i < repeat; i++) {
        newStr += str;  // Concatenate str to newStr
    }
    
    return newStr;  // Return the resulting repeated string
}

/*
 * Sample Tests:
 * Describe(Fixed_tests) {
 *     It(Sample_cases) {
 *         Assert::That(repeat_str(3, "*"), Equals("***"));
 *         Assert::That(repeat_str(5, "#"), Equals("#####"));
 *         Assert::That(repeat_str(2, "ha "), Equals("ha ha "));
 *         Assert::That(repeat_str(5, ">"), Equals(">>>>>"));
 *         Assert::That(repeat_str(10, "!"), Equals("!!!!!!!!!!"));
 *         Assert::That(repeat_str(3, "hello "), Equals("hello hello hello "));
 *         Assert::That(repeat_str(3, "$"), Equals("$$$"));
 *         Assert::That(repeat_str(5, "a"), Equals("aaaaa"));
 *         Assert::That(repeat_str(6, "A"), Equals("AAAAAA"));
 *         Assert::That(repeat_str(7, "aA"), Equals("aAaAaAaAaAaAaA"));
 *         Assert::That(repeat_str(3, ""), Equals(""));
 *         Assert::That(repeat_str(0, "null"), Equals(""));
 *         Assert::That(repeat_str(0, ""), Equals(""));
 *     }
 * };
 */
