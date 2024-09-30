#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
class NumberGuessingGame {
public:
    NumberGuessingGame() {
       srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
        target_number = rand() % 100 + 1; // Random number between 1 and 100
        
    }

    void start() {
       cout << "Welcome to the Number Guessing Game.\n";
       cout << "Guess a number between 1 and 100.\n";

        int guess;
        while (true) {
            cout << "Enter the number: ";
            cin >> guess;
           

            if (guess < 1 || guess > 100) {
                cout << "The range is between 1 and 100.\n";
            } else if (guess < target_number) {
                cout << "Too low! Try again.\n";
            } else if (guess > target_number) {
                cout << "Too high! Try again.\n";
            } else {
                cout << "Congratulations! You've guessed the number " << target_number  << " \n";
                break;
            }
        }
    }

private:
    int target_number;
    
};

int main() {
    NumberGuessingGame game;
    game.start();
    return 0;
}