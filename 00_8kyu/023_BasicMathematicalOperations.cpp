/*
 * Level: 8 kyu
 * Name: Basic Mathematical Operations
 * Instructions:
 * Your task is to create a function that does four basic mathematical operations.
 * The function should take three arguments - operation (string/char), value1 (number), value2 (number).
 * The function should return the result of numbers after applying the chosen operation.
 * 
 * Examples (Operator, value1, value2) --> output:
 * ('+', 4, 7) --> 11
 * ('-', 15, 18) --> -3
 * ('*', 5, 5) --> 25
 * ('/', 49, 7) --> 7
 */

int basicOp(char op, int val1, int val2) {
    // Use switch statement to determine the operation and return the result
    switch(op) {
        case '+':
            return val1 + val2;
        case '-':
            return val1 - val2;
        case '*':
            return val1 * val2;
        case '/':
            return val1 / val2;
        default:
            return 0; // Default case (not needed as per given constraints)
    }
}

/*
 * Sample Tests:
 * Describe(basic_op_samples) {
 *   It(basic_tests) {
 *     Assert::That(basicOp('+', 5, 4), Equals(9));
 *     Assert::That(basicOp('-', 11, 8), Equals(3));
 *     Assert::That(basicOp('*', 3, 4), Equals(12));
 *     Assert::That(basicOp('/', 16, 4), Equals(4));
 *   }
 * };
 */
