#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char userChoice(char player);
char computerChoice(char computer);
void displayChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;
    bool playing = true;
    while(playing) {
        cout << "------------------------------------" << endl;
        cout << "Welcome to the Rock Paper Scissors Game!" << endl;
        cout << "------------------------------------" << endl;
        player = userChoice(player);
        cout << "------------------------------------" << endl;
        cout << "Your choice: ";
        displayChoice(player);
        cout << "------------------------------------" << endl;
        if(player == 'q') {
            bool playing = false;
            cout << "Thanks for playing." << endl;
            cout << "------------------------------------" << endl;
            break;
        }
        computer = computerChoice(computer);
        cout << "Computer choice: ";
        displayChoice(computer);
        cout << "------------------------------------" << endl;
        chooseWinner(player, computer);
    } 
}

char userChoice(char player) {
    do {
        cout << "Enter r for Rock." << endl;
        cout << "Enter p for Paper." << endl;
        cout << "Enter s for Scissors." << endl;
        cout << "Enter q to Quite." << endl;
        cout << "------------------------------------" << endl;
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's' && player != 'q');
    return player;
}

char computerChoice(char computer) {
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
    return 'r';
    case 2:
    return 'p';
    case 3:
    return 's';
    }
    return computer;
}

void displayChoice(char choice) {
    switch(choice) {
        case 'r':
        cout << "Rock" << endl;
        break;
        case 'p':
        cout << "Paper" << endl;
        break;
        case 's':
        cout << "Scissors" << endl;
        break;
        case 'q':
        cout << "Quit" << endl;
        break;
    }
}

void chooseWinner(char player, char computer) {
    switch(player) {
        case 'r':
        if(computer == 'r') {
            cout << "It's a tie!" << endl;
        } else if(computer == 'p') {
            cout << "Computer wins!" << endl;
        } else {
            cout << "You win!" << endl;
        }
        break;
        
        case 'p':
        if(computer == 'r') {
            cout << "You win!" << endl;
        } else if(computer == 'p') {
            cout << "It's a tie!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
        break;

        case 's':
        if(computer == 'r') {
            cout << "Computer wins!" << endl;
        } else if(computer == 'p') {
            cout << "You win!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }
    }
}