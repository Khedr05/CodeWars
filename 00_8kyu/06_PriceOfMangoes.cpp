/*
 * Level: 8 kyu
 * Name: Price of Mangoes
 * Instructions:
 * There's a "3 for 2" (or "2+1" if you like) offer on mangoes. 
 * For a given quantity and price (per mango), calculate the total cost of the mangoes.
 * 
 * Examples:
 * mango(2, 3) ==> 6    # 2 mangoes for $3 per unit = $6; no mango for free
 * mango(3, 3) ==> 6    # 2 mangoes for $3 per unit = $6; +1 mango for free
 * mango(5, 3) ==> 12   # 4 mangoes for $3 per unit = $12; +1 mango for free
 * mango(9, 5) ==> 30   # 6 mangoes for $5 per unit = $30; +3 mangoes for free
 */

#include <iostream>
using namespace std;

// Function to calculate the total cost of mangoes considering the "3 for 2" offer
int mango(int quantity, int price) {
    // Calculate the number of free mangoes
    int freeMangos = quantity / 3;
    
    // Calculate the total cost excluding the free mangoes
    return (quantity - freeMangos) * price;
}

/*
 * Simple Test:
 * Describe(ExampleTests) {
 *     It(BasicTest) {
 *         Assert::That(mango(3, 3), Is().EqualTo(6));
 *         Assert::That(mango(9, 5), Is().EqualTo(30));
 *     }
 * };
 */

