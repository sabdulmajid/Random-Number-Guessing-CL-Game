#include <iostream>

void PrintIntroduction()
{
    // Introducing the game to the players
    std::cout << "\nGreetings Secret Agent! You are tasked with a mission to break into a complex system\n";
    std::cout << "You MUST always type in the correct code, or else the lock explodes and you die! Enter the correct code: \n\n";
}

void PlayGame()
{
    PrintIntroduction();
    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Outputting instructions to the terminal
    std::cout << std::endl;
    std::cout << "- There are 3 numbers in the code.\n";
    std::cout << "\n- The codes add upto: " << CodeSum;
    std::cout << "\n- The codes multiply to give: " << CodeProduct << std::endl;
    
    // Inputting player guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // If statement to check if guesses are correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou guessed correct! Well done.";
    }
    else
    {
        std::cout << "\nYou guessed incorrect. An explosion occurs. You die.";
    }
}


// main() function used to 'run' code
int main()
{
    while(true)
    {
        PlayGame();
        std::cin.clear(); // Used to clear any errors 
        std::cin.ignore(); // Used to ignore any wrong input
    }

    
    return 0;
}
