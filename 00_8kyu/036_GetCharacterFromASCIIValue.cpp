/*
 * Level: 8 kyu
 * Name: Get character from ASCII Value
 * Instructions:
 * Write a function which takes a number and returns the corresponding ASCII char for that value.
 * 
 * Example:
 * 65 --> 'A'
 * 97 --> 'a'
 * 48 --> '0'
 */

#include <string>

/*
 * Function to get the corresponding ASCII character for a given integer.
 */
char get_char(int i) {
    return static_cast<char>(i);
}

/*
 * Sample Tests:
 * 
 * Describe(tests)
 * {
 *     It(basic_tests)
 *     {
 *         Assert::That(get_char(55), Equals('7'));
 *         Assert::That(get_char(56), Equals('8'));
 *         Assert::That(get_char(57), Equals('9'));
 *         Assert::That(get_char(58), Equals(':'));
 *         Assert::That(get_char(59), Equals(';'));
 *         Assert::That(get_char(60), Equals('<'));
 *         Assert::That(get_char(61), Equals('='));
 *         Assert::That(get_char(62), Equals('>'));
 *         Assert::That(get_char(63), Equals('?'));
 *         Assert::That(get_char(64), Equals('@'));
 *         Assert::That(get_char(65), Equals('A'));
 *     }
 * };
 */
