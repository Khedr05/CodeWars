/*
 * Level: 8 kyu
 * Name: What is between?
 * Instructions:
 * Complete the function that takes two integers (a, b, where a < b) and return an array of all integers
 * between the input parameters, including them.
 * 
 * For example:
 * a = 1
 * b = 4
 * --> [1, 2, 3, 4]
 */

#include <vector>
#include <cassert>

/*
 * Function to generate an array of integers between start and end (inclusive).
 */
std::vector<int> between(int start, int end) {
  
  std::vector<int> values;
  
  for(int i=start;i<=end;i++)
  {
     values.push_back(i);   
  }
  return values;
}  

/*
 * Sample Tests:
 * 
 * Describe(Fixed_tests) {
 *   It(Basic_cases) {
 *     Assert::That(between(1, 4), Equals(std::vector<int>{1, 2, 3, 4}));
 *     Assert::That(between(-2, 2), Equals(std::vector<int>{-2, -1, 0, 1, 2}));
 *     Assert::That(between(-1, 10), Equals(std::vector<int>{-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
 *     Assert::That(between(0, 1), Equals(std::vector<int>{0, 1}));
 *     Assert::That(between(-1, 0), Equals(std::vector<int>{-1, 0}));
 *     Assert::That(between(0, 0), Equals(std::vector<int>{0}));
 *     Assert::That(between(5, 5), Equals(std::vector<int>{5}));
 *   }
 * };
 */
