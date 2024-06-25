/*
 * Level: 8 kyu
 * Name: You only need one - Beginner
 * Instructions:
 * You will be given an array `seq` and a value `elem`. All you need to do is check whether
 * the provided array contains the value `elem`.
 * 
 * Array `seq` can contain numbers or strings. `elem` can be either.
 * Return true if the array contains the value, false if not.
 */

#include <vector>
#include <string>
#include <cassert>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  for (int i = 0; i < seq.size(); i++) {
    if (seq[i] == elem) return true;
  }
  return false;
}

/*
 * Sample Tests:
 * 
 * Describe(Sample_Tests) {
 *   It(Examples) {
 *     Assert::That(check({ }, "a"), Equals(false));
 *     Assert::That(check({ "a", "b", "c" }, "b"), Equals(true));
 *     Assert::That(check({ "a", "b", "c" }, "e"), Equals(false));
 *   }
 * };
 */
