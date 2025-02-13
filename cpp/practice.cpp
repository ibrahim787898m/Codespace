#include <iostream>
using namespace std;

int main() {
    bool isresponded = true;
    while (isresponded) {
        int u_input;
        cout << "------------------------------------" << endl;
        cout << "Hey! Do you love me? Type 1 for Yes or Type 0 for No: " << endl;
        cout << "------------------------------------" << endl;
        cin >> u_input;

        if (u_input == 1) {
            cout << "------------------------------------" << endl;
            cout << "Thanks for loving me. I love you too." << endl;
            cout << "------------------------------------" << endl;
        } else if (u_input == 0) {
            cout << "------------------------------------" << endl;
            cout << "Thanks for loving me more. I love you infinity." << endl;
            cout << "------------------------------------" << endl;
        } else {
            cout << "------------------------------------" << endl;
            cout << "Invalid user input. Please try again." << endl;
            cout << "------------------------------------" << endl;
            isresponded = false;
        }
    }
}