/*
 * Level: 8 kyu
 * Name: Get Nth Even Number
 * Instructions:
 * Return the Nth Even Number
 * 
 * Example(Input --> Output)
 * 1 --> 0 (the first even number is 0)
 * 3 --> 4 (the 3rd even number is 4 (0, 2, 4))
 * 100 --> 198
 * 1298734 --> 2597466
 * 
 * The input will not be 0.
 */

#include <cassert>

/*
 * Function to get the Nth even number.
 */
int nthEven(int n) {
  int retVal = 0;
  
  for(int i=1;i<n;i++)
  {
      retVal+=2;    
  }
  return retVal;
}

/*
 * Sample Tests:
 * 
 * Describe(NthEven) {
 *     It(FixedTests) {
 *         Assert::That(nthEven(1), Equals(0));
 *         Assert::That(nthEven(2), Equals(2));
 *         Assert::That(nthEven(3), Equals(4));
 *         Assert::That(nthEven(6), Equals(10));
 *         Assert::That(nthEven(101), Equals(200));
 *         Assert::That(nthEven(201), Equals(400));
 *         Assert::That(nthEven(1001), Equals(2000));
 *     }
 * };
 */
