/*
 * Level: 8 kyu
 * Name: Remove First and Last Character
 * Instructions:
 * It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. 
 * You're given one parameter, the original string. You don't have to worry about strings with less than two characters.
 * 
 * Examples:
 * sliceString("tuna") --> "un"
 * sliceString("rats") --> "at"
 * sliceString("code") --> "od"
 */

#include <string>
using namespace std;

// Function to remove the first and last characters of a string
string sliceString(string str) {
    string newStr = "";  // Initialize an empty string to store the result

    // Loop through the characters from index 1 to length - 2 (to exclude first and last characters)
    for (int i = 1; i < (str.length() - 1); i++) {
        newStr += str[i];  // Append each character to the new string
    }

    return newStr;  // Return the resulting string without the first and last characters
}

/*
 * Simple Test:
 * Describe(Slicing_String)
 * {
 *     It(Check_Short_Length_String)
 *     {
 *         Assert::That(sliceString("tuna"), Equals("un"));
 *         Assert::That(sliceString("rats"), Equals("at"));
 *         Assert::That(sliceString("code"), Equals("od"));
 *     }
 *     
 *     It(Check_Longer_String)
 *     {
 *         Assert::That(sliceString("country"), Equals("ountr"));
 *         Assert::That(sliceString("place"), Equals("lac"));
 *         Assert::That(sliceString("translation"), Equals("ranslatio"));
 *     }
 * };
 */
