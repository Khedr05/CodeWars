/*
 * Level: 8 kyu
 * Name: Reversed Strings
 * Instructions:
 * Complete the solution so that it reverses the string passed into it.
 * 
 * Examples:
 * 'world'  =>  'dlrow'
 * 'word'   =>  'drow'
 */

#include <iostream>
#include <string>
using namespace std;

// Function to reverse a given string
string reverseString(string str) {
    string newStr;
    int strLen = str.length();
    
    // Loop through the string in reverse order and append each character to newStr
    for (int i = strLen - 1; i >= 0; i--) {
        newStr += str[i];
    }
    
    return newStr;
}

/*
 * Simple Test:
 * Describe(Reverse_String) {
 *     It(Check_Short_Words) {
 *         Assert::That(reverseString("hello"), Equals("olleh"));
 *         Assert::That(reverseString("rat"), Equals("tar"));
 *         Assert::That(reverseString("alpha"), Equals("ahpla"));
 *     }
 * 
 *     It(Check_Longer_Words) {
 *         Assert::That(reverseString("codewars"), Equals("srawedoc"));
 *         Assert::That(reverseString("football"), Equals("llabtoof"));
 *         Assert::That(reverseString("translation"), Equals("noitalsnart"));
 *     }
 * };
 */

