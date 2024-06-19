/*
 * Level: 8 kyu
 * Name: Quarter of the Year
 * Instructions:
 * Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.
 * 
 * For example:
 * month 2 (February), is part of the first quarter;
 * month 6 (June), is part of the second quarter;
 * and month 11 (November), is part of the fourth quarter.
 * 
 * Constraint:
 * 1 <= month <= 12
 */

#include <iostream>
using namespace std;

// Function to determine the quarter of the year for a given month
int quarter_of(int month) {
    switch(month) {
        case 1:
        case 2:
        case 3:
            return 1;
        case 4:
        case 5:
        case 6:
            return 2;
        case 7:
        case 8:
        case 9:
            return 3;
        case 10:
        case 11:
        case 12:
            return 4;
        default:
            return -1; // Added to handle unexpected cases
    }
}

/*
 * Simple Test:
 * Describe(Sample_tests) {
 *     It(Base_cases) {
 *         Assert::That(quarter_of(1), Equals(1));
 *         Assert::That(quarter_of(3), Equals(1));
 *         Assert::That(quarter_of(5), Equals(2));
 *         Assert::That(quarter_of(7), Equals(3));
 *         Assert::That(quarter_of(9), Equals(3));
 *         Assert::That(quarter_of(11), Equals(4));
 *     }  
 * };
 */

