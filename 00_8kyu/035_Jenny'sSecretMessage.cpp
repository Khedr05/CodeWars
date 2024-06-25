/*
 * Level: 8 kyu
 * Name: Jenny's secret message
 * Instructions:
 * Jenny has written a function that returns a greeting for a user. However, she's in love with Johnny,
 * and would like to greet him slightly different. She added a special case to her function, but she made a mistake.
 * 
 * Can you help her?
 */

#include <string>

/*
 * Function to return a greeting for a user.
 * Special case: If the name is "Johnny", return "Hello, my love!"
 */
std::string greet(std::string name) 
{
    // Check if the name is "Johnny"
    if(name == "Johnny") {
        return "Hello, my love!";
    }
    // Return the standard greeting for other names
    return "Hello, " + name + "!";
}

/*
 * Sample Tests:
 * 
 * Describe(greet_normally)
 * {
 *     It(should_append_names)
 *     {
 *         Assert::That(greet("James"), Equals("Hello, James!"));
 *         Assert::That(greet("Jane"), Equals("Hello, Jane!"));
 *         Assert::That(greet("Jim"), Equals("Hello, Jim!"));
 *     }
 * };
 * 
 * Describe(greet_johnny)
 * {
 *     It(should_be_a_little_more_special)
 *     {
 *         Assert::That(greet("Johnny"), Equals("Hello, my love!"));
 *     }
 * };
 */

