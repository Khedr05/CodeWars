/*
 * Level: 8 kyu
 * Name: Abbreviate a Two Word Name
 * Instructions:
 * Write a function `abbrevName` that converts a two-word name into initials.
 * The input is a string containing exactly two words separated by a space.
 * The output should be two uppercase letters separated by a dot.
 * Example: For the input "Sam Harris", the output should be "S.H".
 */

#include <string>
#include <cassert> // for testing

std::string abbrevName(std::string name) {
  std::string newName = "";
  
  // Append the first character of the first word in uppercase
  newName += std::toupper(name[0]);
  newName += '.';
  // Append the first character of the second word in uppercase
  newName += std::toupper(name[name.find(' ') + 1]);
  
  return newName;
}

/*
 * Sample Tests:
 * 
 * Describe(Tests) {
 *   It(Fixed_tests) {
 *     Assert::That(abbrevName("Sam Harris"), Equals("S.H"));
 *     Assert::That(abbrevName("Patrick Feenan"), Equals("P.F"));
 *     Assert::That(abbrevName("Evan Cole"), Equals("E.C"));
 *     Assert::That(abbrevName("P Favuzzi"), Equals("P.F"));
 *     Assert::That(abbrevName("David Mendieta"), Equals("D.M"));
 *   }
 * };
 */
