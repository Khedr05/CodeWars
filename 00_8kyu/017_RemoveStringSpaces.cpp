/*
 * Level: 8 kyu
 * Name: Remove String Spaces
 * Instructions:
 * Write a function called no_space which removes all spaces from a given string.
 * 
 * Examples:
 * no_space("8 j 8   mBliB8g  imjB8B8  jl  B") --> "8j8mBliB8gimjB8B8jlB"
 * no_space("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd") --> "88Bifk8hB8BB8BBBB888chl8BhBfd"
 * no_space("8aaaaa dddd r     ") --> "8aaaaaddddr"
 * FUNDAMENTALS STRINGS
 */

#include <string>
using namespace std;

// Function to remove spaces from a string
string no_space(const string& x)
{
    string newStr = "";  // Initialize an empty string to store the resultant string
    
    // Loop through each character in the input string x
    for (int i = 0; i < x.length(); i++)
    {
        // Check if the current character is not a space
        if (x[i] != ' ')
            newStr += x[i];  // Append the non-space character to newStr
    }
    
    return newStr;  // Return the resultant string with spaces removed
}

/* Sample Tests
Describe(Basic_tests)
{
    It(Basic_test)
    {
        Assert::That(no_space("8 j 8   mBliB8g  imjB8B8  jl  B"), Equals("8j8mBliB8gimjB8B8jlB"));
        Assert::That(no_space("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd"), Equals("88Bifk8hB8BB8BBBB888chl8BhBfd"));
        Assert::That(no_space("8aaaaa dddd r     "), Equals("8aaaaaddddr"));
        Assert::That(no_space("jfBm  gk lf8hg  88lbe8 "), Equals("jfBmgklf8hg88lbe8"));
        Assert::That(no_space("8j aam"), Equals("8jaam"));
    }
};*/
