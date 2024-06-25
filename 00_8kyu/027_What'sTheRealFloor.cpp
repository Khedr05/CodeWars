/*
 * Level: 8 kyu
 * Name: What's the real floor?
 * Instructions:
 * Americans are odd people: in their buildings, the first floor is actually the ground floor 
 * and there is no 13th floor (due to superstition).
 * 
 * Write a function that given a floor in the american system returns the floor in the european system.
 * 
 * Examples:
 * 1  =>  0 
 * 0  =>  0
 * 5  =>  4
 * 15  =>  13
 * -3  =>  -3
 */

// Function to convert the american floor to the european floor
int getRealFloor(int f) {
    // Check if the floor is between 1 and 12 (inclusive)
    if (f > 0 && f < 13) {
        return f - 1; // Convert the American floor to European floor
    } 
    // Check if the floor is greater than 13
    else if (f > 13) {
        return f - 2; // Adjust the floor to account for the missing 13th floor
    } 
    // If the floor is 0 or negative, or exactly 13 (which is skipped)
    else {
        return f; // Return the floor as it is (ground floor or basement)
    }
}

/*
 * Sample Tests:
 * Describe(Tests) {
 *     It(test) {
 *         Assert::That(getRealFloor(1), Equals(0));
 *         Assert::That(getRealFloor(5), Equals(4));
 *         Assert::That(getRealFloor(15), Equals(13));
 *     }
 * };
 */
