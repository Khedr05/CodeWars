/*
 * Level: 8 kyu
 * Name: Rock Paper Scissors!
 * Instructions:
 * Let's play! You have to return which player won! In case of a draw return "Draw!".
 * 
 * Examples(Input1, Input2 --> Output):
 * "scissors", "paper" --> "Player 1 won!"
 * "scissors", "rock" --> "Player 2 won!"
 * "paper", "paper" --> "Draw!"
 */

#include <string>

/*
 * Function to determine the winner of the Rock Paper Scissors game
 */
std::string rps(const std::string& p1, const std::string& p2)
{
    // Define result messages
    std::string drawMsg = "Draw!";
    std::string p1Msg = "Player 1 won!";
    std::string p2Msg = "Player 2 won!";
    
    // Check for a draw
    if (p1 == p2) {
        return drawMsg;
    } 
    // Check if Player 1 wins
    else if ((p1 == "scissors" && p2 == "paper") || 
             (p1 == "paper" && p2 == "rock") || 
             (p1 == "rock" && p2 == "scissors")) {
        return p1Msg;
    }
    // Otherwise, Player 2 wins
    else {
        return p2Msg;
    }
}

/*
 * Sample Tests:
 * 
 * Describe(test_rpg)
 * {
 *     It(should_pass_some_example_tests)
 *     {
 *         Assert::That(rps("rock", "scissors"), Equals("Player 1 won!"));
 *         Assert::That(rps("rock", "paper"), Equals("Player 2 won!"));
 *         Assert::That(rps("rock", "rock"), Equals("Draw!"));
 *     }
 * };
 */
