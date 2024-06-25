/*
 * Level: 8 kyu
 * Name: Beginner Series #2 Clock
 * Instructions:
 * Clock shows h hours, m minutes, and s seconds after midnight.
 * Your task is to write a function that returns the time since midnight in milliseconds.
 * 
 * Examples:
 * past(0, 1, 1) -> 61000
 * past(1, 1, 1) -> 3661000
 * past(0, 0, 0) -> 0
 * past(1, 0, 1) -> 3601000
 * past(1, 0, 0) -> 3600000
 * 
 * Input constraints:
 * 0 <= h <= 23
 * 0 <= m <= 59
 * 0 <= s <= 59
 */

int past(int h, int m, int s) {
    // Convert hours, minutes, and seconds to milliseconds
    return ((h * 3600) + (m * 60) + s) * 1000;
}

/*
 * Sample Tests:
 * Describe(Clock) {
 *   It(BasicTests) {
 *     Assert::That(past(0, 1, 1), Equals(61000));      // Test case 1: 0 hours, 1 minute, and 1 second
 *     Assert::That(past(1, 1, 1), Equals(3661000));    // Test case 2: 1 hour, 1 minute, and 1 second
 *     Assert::That(past(0, 0, 0), Equals(0));          // Test case 3: 0 hours, 0 minutes, and 0 seconds
 *     Assert::That(past(1, 0, 1), Equals(3601000));    // Test case 4: 1 hour, 0 minutes, and 1 second
 *     Assert::That(past(1, 0, 0), Equals(3600000));    // Test case 5: 1 hour, 0 minutes, and 0 seconds
 *   }
 * };
 */
