/*
 * Level: 8 kyu
 * Name: MakeUpperCase
 * Instructions: Write a function which converts the input string to uppercase.
 * Example:
 * makeUpperCase("hello") => "HELLO"
 */

#include <string>
#include <cassert>

std::string makeUpperCase(const std::string& input_str) {
  std::string newStr = "";

  for (int i = 0; i < input_str.length(); i++) {
    newStr += std::toupper(input_str[i]);
  }

  return newStr;
}

/*
 * Sample Tests:
 * 
 * Describe(The_makeUpperCase_function) {
 *   It(should_pass_all_the_tests_provided) {
 *     Assert::That(makeUpperCase("hello"), Equals("HELLO"));
 *   }
 * };
 */
