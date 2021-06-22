#include <iostream>

// main() function used to 'run' code
int main()
{
    std::cout<< std::endl;
    std::cout << "Greetings Secret Agent! You are tasked with a mission to break into a complex system"<< std::endl;
    std::cout << "You MUST always type in the correct code, or else the lock explodes and you die! Enter the correct code: "<< std::endl;

    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 4;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "- There are 3 numbers in the code." << std::endl;
    std::cout << "- The codes add upto: " << CodeSum << std::endl;
    std::cout << "- The codes multiply to give: " << CodeProduct << std::endl;
    
    int GuessA, GuessB, GuessC;

    std::cout << std::endl;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You guessed correct! Well done.";
    }
    else
    {
        std::cout << "You guessed incorrect. An explosion occurs. You die.";
    }

    return 0;
}
