#include <iostream>
#include <ctime>


void PrintIntroduction(int Difficulty)
{
    // Introducing the game to the players
    std::cout << "\nGreetings Secret Agent! You are tasked with a mission to break into a level "<< Difficulty;
    std::cout << " complex system. \n\nYou MUST always type in the correct code, or else the lock explodes and you die! \nEnter the correct code to continue... \n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Outputting instructions to the terminal
    std::cout << std::endl;
    std::cout << "- There are 3 numbers in the code.";
    std::cout << "\n- The codes add upto: " << CodeSum;
    std::cout << "\n- The codes multiply to give: " << CodeProduct << std::endl << std::endl;
    
    // Inputting player guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // If statement to check if guesses are correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Damn! You made it past safely! Well done!***\n\n";
        return true;
    }
    else
    {
        std::cout << "\n*** You guessed incorrect! Be careful agent! Try again. ***\n\n";
        return false;
    }
}


// main() function used to 'run' code
int main()
{
    srand(time(NULL)); // Used to create a random sequence based on time of day.

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loops the game until it is complete
    {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Used to clear any errors 
        std::cin.ignore(); // Used to ignore any wrong input

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\n*** Well done Agent! You made it past the complex system and you've saved the world! ***\n";
    return 0;
}
