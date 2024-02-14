// Task1++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>   
#include <ctime>     

    using namespace std;

int main()
{

    
        // Seed the random number generator with the current time
        srand(time(0));

        // Generate a random number between 1 and 100
        int secretNumber = rand() % 100 + 1;

        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!\n";
        cout << "Try to guess the secret number between 1 and 100.\n\n";

        do {
            // Get player's guess
            cout << "Enter your guess: ";
            cin >> guess;

            // Increment the number of attempts
            attempts++;

            // Check if the guess is correct
            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            }
            else if (guess < secretNumber) {
                cout << "Too low. Try again.\n";
            }
            else {
                cout << "Too high. Try again.\n";
            }

        } while (guess != secretNumber);

        return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
