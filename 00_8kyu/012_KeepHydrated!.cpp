/*
 * Level: 8 kyu
 * Name: Keep Hydrated!
 * Instructions:
 * Nathan loves cycling.
 * 
 * Because Nathan knows it is important to stay hydrated, he drinks 0.5 litres of water per hour of cycling.
 * 
 * You get given the time in hours and you need to return the number of litres Nathan will drink, rounded to the smallest value.
 * 
 * Examples:
 * time = 3   ----> litres = 1
 * time = 6.7 ----> litres = 3
 * time = 11.8----> litres = 5
 */

#define LITRES_PER_HOUR 0.5

// Function to calculate litres of water Nathan will drink
int litres(double time) {
    return time * LITRES_PER_HOUR;
}

/*
 * Simple Test:
 * Describe(SampleTests) {
 *     It(should_pass_sample_tests) {
 *         Assert::That(litres(2), Equals(1), ExtraMessage("Invalid result for time = 2"));
 *         Assert::That(litres(1.4), Equals(0), ExtraMessage("Invalid result for time = 1.4"));
 *         Assert::That(litres(12.3), Equals(6), ExtraMessage("Invalid result for time = 12.3"));
 *         Assert::That(litres(0.82), Equals(0), ExtraMessage("Invalid result for time = 0.82"));
 *         Assert::That(litres(11.8), Equals(5), ExtraMessage("Invalid result for time = 11.8"));
 *         Assert::That(litres(1787), Equals(893), ExtraMessage("Invalid result for time = 1787"));
 *         Assert::That(litres(0), Equals(0), ExtraMessage("Invalid result for time = 0"));
 *     }
 * };
 */
