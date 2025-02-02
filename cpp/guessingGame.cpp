#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;

    cout << "-----------------------------------" << endl;
    cout << "Welcome to the guessing game!" << endl;
    cout << "I have a number between 1 and 100." << endl;
    cout << "Can you guess it?" << endl;
    cout << "-----------------------------------" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "-----------------------------------" << endl;
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;

            if (tries == 1) {
                cout << "You are a mind reader!" << endl;
            } else if (tries < 5) {
                cout << "You are a good guesser!" << endl;
            } else if (tries < 10) {
                cout << "You are a poor guesser!" << endl;
            } else {
                cout << "You are a terrible guesser!" << endl;
            }
            cout << "-----------------------------------" << endl;

            cout << "Would you like to play again? (y/n):";
            char playAgain;
            cin >> playAgain;
            cout << "-----------------------------------" << endl;

            if (playAgain == 'y') {
                secretNumber = rand() % 100 + 1;
                tries = 0;   
            } else {
                cout << "Thanks for playing!" << endl;
                cout << "-----------------------------------" << endl;
            }
        }
    } while (guess != secretNumber);

    return 0;
}