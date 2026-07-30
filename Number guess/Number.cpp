#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secret_number = std::rand() % 100 + 1;
    int user_guess = 0;
    int total_attempts = 0;

    std::cout << "=================================\n";
    std::cout << " Welcome to the Number Guessing Game!\n";
    std::cout << "=================================\n";
    std::cout << "I have chosen a number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n\n";

    do 
    {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;
        total_attempts++;

        if (user_guess > secret_number) 
        {
            std::cout << "Too high! Try a lower number.\n\n";
        } 
        else if (user_guess < secret_number) 
        {
            std::cout << "Too low! Try a higher number.\n\n";
        }
        else 
        {
            std::cout << "\nCongratulations! You found the secret number (" << secret_number << ")!\n";
            std::cout << "It took you " << total_attempts << " attempts.\n";
        }
    } while (user_guess != secret_number);

    return 0;
}
