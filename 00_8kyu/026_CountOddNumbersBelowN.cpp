/*
 * Level: 8 kyu
 * Name: Count Odd Numbers below n
 * Instructions:
 * Given a number n, return the number of positive odd numbers below n.
 * 
 * Examples (Input -> Output)
 * 7  -> 3 (because odd numbers below 7 are [1, 3, 5])
 * 15 -> 7 (because odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13])
 * 
 * Expect large Inputs!
 */

// Function to count the number of positive odd numbers below n
int odd_count(int n) {
    return n / 2; // Since odd numbers are spaced by 2, we can simply return n divided by 2
}

/*
 * Sample Tests:
 * Describe(basic_tests) {
 *   It(test1) {
 *     Assert::That(odd_count(15), Equals(7));
 *   }
 *   
 *   It(test2) {
 *     Assert::That(odd_count(15023), Equals(7511));
 *   }
 * };
 */
