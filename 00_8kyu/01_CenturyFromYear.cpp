/*
 * Level: 8 kyu
 * Name: Century From Year
 * Instructions:
 * The first century spans from the year 1 up to and including the year 100, 
 * the second century - from the year 101 up to and including the year 200, etc.
 * 
 * Task:
 * Given a year, return the century it is in.
 * 
 * Examples:
 * 1705 --> 18
 * 1900 --> 19
 * 1601 --> 17
 * 2000 --> 20
 * 2742 --> 28
 */

#include <iostream>
using namespace std;

// Function to determine the century from a given year
int centuryFromYear(int year) {
    // If the year is exactly divisible by 100, it belongs to the current century
    // Otherwise, it belongs to the next century
    return (year % 100 == 0) ? (year / 100) : ((year / 100) + 1);
}

/*
 * Simple Test:
 * Describe(Century_From_The_Year)
 * {
 *     It(EXtract_The_Century_From_Given_Year)
 *     {
 *         Assert::That(centuryFromYear(1705), Equals(18));
 *         Assert::That(centuryFromYear(1900), Equals(19));
 *         Assert::That(centuryFromYear(1601), Equals(17));
 *         Assert::That(centuryFromYear(2000), Equals(20));  
 *     }
 * };
 */

