/*
 * Level: 8 kyu
 * Name: Is he gonna survive?
 * Instructions:
 * A hero is on his way to the castle to complete his mission. However, he's been told that the castle 
 * is surrounded with a couple of powerful dragons! Each dragon takes 2 bullets to be defeated, our hero 
 * has no idea how many bullets he should carry.. Assuming he's gonna grab a specific given number of bullets 
 * and move forward to fight another specific given number of dragons, will he survive?
 * 
 * Return true if yes, false otherwise.
 */

#include <cassert>

/*
 * Function to determine if the hero can survive based on bullets and dragons
 */
bool hero(int bullets, int dragons) {
    // Check if the number of bullets is enough to defeat all dragons
    return (bullets / 2) >= dragons;
}

/*
 * Sample Tests:
 * 
 * Describe(Sample_tests)
 * {
 *   It(Tests)
 *   {
 *     Assert::That(hero(10, 5), Equals(true));
 *     Assert::That(hero(7, 4), Equals(false));
 *     Assert::That(hero(4, 5), Equals(false));
 *     Assert::That(hero(100, 40), Equals(true));
 *     Assert::That(hero(1500, 751), Equals(false));
 *     Assert::That(hero(0, 1), Equals(false));
 *   }
 * };
 */
}
