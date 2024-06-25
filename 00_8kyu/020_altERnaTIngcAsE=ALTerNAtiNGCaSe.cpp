/*
 * Level: 8 kyu
 * Name: altERnaTIng cAsE <=> ALTerNAtiNG CaSe
 * Instructions:
 * Define a function to_alternating_case that takes a string and transforms each lowercase letter to uppercase and each uppercase letter to lowercase.
 * 
 * Examples:
 * to_alternating_case("hello world") === "HELLO WORLD"
 * to_alternating_case("HELLO WORLD") === "hello world"
 * to_alternating_case("hello WORLD") === "HELLO world"
 * to_alternating_case("HeLLo WoRLD") === "hEllO wOrld"
 * to_alternating_case("12345")       === "12345"                   // Non-alphabetical characters are unaffected
 * to_alternating_case("1a2b3c4d5e")  === "1A2B3C4D5E"
 * to_alternating_case("String.prototype.toAlternatingCase") === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
 */

#include <string>
using namespace std;

// Function to transform each lowercase letter to uppercase and each uppercase letter to lowercase
string to_alternating_case(const string& str) {
    string newStr = "";  // Initialize an empty string to store the transformed string

    // Loop through each character in the input string
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            // If the character is uppercase, transform it to lowercase
            newStr += tolower(str[i]);
        } else if (islower(str[i])) {
            // If the character is lowercase, transform it to uppercase
            newStr += toupper(str[i]);
        } else {
            // If the character is not a letter, add it to the new string as is
            newStr += str[i];
        }
    }

    return newStr;  // Return the transformed string
}

/*
 * Sample Tests:
 * Describe(basic) {
 *   It(ShouldPassAllTheTestsProvided) {
 *     Assert::That(to_alternating_case("hello world"), Equals("HELLO WORLD"));
 *     Assert::That(to_alternating_case("HELLO WORLD"), Equals("hello world"));
 *     Assert::That(to_alternating_case("hello WORLD"), Equals("HELLO world"));
 *     Assert::That(to_alternating_case("HeLLo WoRLD"), Equals("hEllO wOrld"));
 *     Assert::That(to_alternating_case("12345"), Equals("12345"));
 *     Assert::That(to_alternating_case("1a2b3c4d5e"), Equals("1A2B3C4D5E"));
 *     Assert::That(to_alternating_case("String.prototype.toAlternatingCase"), Equals("sTRING.PROTOTYPE.TOaLTERNATINGcASE"));
 *     Assert::That(to_alternating_case(to_alternating_case("Hello World")), Equals("Hello World"));
 *     Assert::That(to_alternating_case("altERnaTIng cAsE"), Equals("ALTerNAtiNG CaSe"));
 *     Assert::That(to_alternating_case("ALTerNAtiNG CaSe"), Equals("altERnaTIng cAsE"));
 *     Assert::That(to_alternating_case("altERnaTIng cAsE <=> ALTerNAtiNG CaSe"), Equals("ALTerNAtiNG CaSe <=> altERnaTIng cAsE"));
 *     Assert::That(to_alternating_case("ALTerNAtiNG CaSe <=> altERnaTIng cAsE"), Equals("altERnaTIng cAsE <=> ALTerNAtiNG CaSe"));
 *   }
 * };
 */
