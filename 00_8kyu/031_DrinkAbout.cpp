/*
 * Level: 8 kyu
 * Name: Drink about
 * Instructions:
 * Kids drink toddy.
 * Teens drink coke.
 * Young adults drink beer.
 * Adults drink whisky.
 * Make a function that receives age, and returns what they drink.
 * 
 * Rules:
 * - Children under 14 old.
 * - Teens under 18 old.
 * - Young adults under 21 old.
 * - Adults have 21 or more.
 * 
 * Examples: 
 * - Input: 13 --> Output: "drink toddy"
 * - Input: 17 --> Output: "drink coke"
 * - Input: 18 --> Output: "drink beer"
 * - Input: 20 --> Output: "drink beer"
 * - Input: 30 --> Output: "drink whisky"
 */

#include <string> // Include the string library

/*
 * Function to determine the drink based on age
 */
std::string people_with_age_drink(int age) {
    // Check if age is less than 14
    if (age < 14) {
        return "drink toddy";
    }
    // Check if age is less than 18
    else if (age < 18) {
        return "drink coke";
    }
    // Check if age is less than 21
    else if (age < 21) {
        return "drink beer";
    }
    // For age 21 or more
    else {
        return "drink whisky";
    }
}

/*
 * Sample Tests:
 * 
 * Describe(Fixed_tests) {
 *   It(Should_drink_toddy) {
 *     Assert::That(people_with_age_drink(0), Equals("drink toddy"));
 *     Assert::That(people_with_age_drink(13), Equals("drink toddy"));
 *   }
 *   It(Should_drink_coke) {
 *     Assert::That(people_with_age_drink(14), Equals("drink coke"));
 *     Assert::That(people_with_age_drink(17), Equals("drink coke"));
 *   }
 *   It(Should_drink_beer) {
 *     Assert::That(people_with_age_drink(18), Equals("drink beer"));
 *     Assert::That(people_with_age_drink(20), Equals("drink beer"));
 *   }
 *   It(Should_drink_whisky) {
 *     Assert::That(people_with_age_drink(21), Equals("drink whisky"));
 *     Assert::That(people_with_age_drink(25), Equals("drink whisky"));
 *   }
 * };
 */
