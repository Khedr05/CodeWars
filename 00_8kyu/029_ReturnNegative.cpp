/*
 * Level: 8 kyu
 * Name: Return Negative
 * Instructions:
 * In this simple assignment, you are given a number and have to make it negative. 
 * But maybe the number is already negative?
 * 
 * Examples:
 * makeNegative(1);  // return -1
 * makeNegative(-5); // return -5
 * makeNegative(0);  // return 0
 * 
 * Notes:
 * - The number can be negative already, in which case no change is required.
 * - Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.
 */

// Function to make a number negative
int makeNegative(int num) {
    // If the number is positive, return its negative; otherwise, return the number itself
    return (num > 0) ? -num : num;
}

/*
 * Sample Tests:
 * 
 * int makeNegative(int num);
 * 
 * Describe(make_negative_algorithm)
 * {
 *     It(should_handle_positive_test)
 *     {
 *         Assert::That(makeNegative( 1), Equals( -1));
 *         Assert::That(makeNegative(42), Equals(-42));
 *     }
 * 
 *     It(should_handle_negative_test)
 *     {
 *         Assert::That(makeNegative( -1), Equals( -1));
 *         Assert::That(makeNegative(-42), Equals(-42));
 *     }  
 * 
 *     It(should_handle_zero_test)
 *     {
 *         Assert::That(makeNegative(0), Equals(0));
 *     }  
 * };
 */
