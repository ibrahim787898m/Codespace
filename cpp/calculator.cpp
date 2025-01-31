#include <iostream>
using namespace std;

void calculate(double num1, double num2, char op) {
    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (op == '/') {
        cout << "Result: " << num1 / num2 << endl;
    }
}

int main() {    
    double num1, num2;
    char op;

    cout << "-----------------------------------" << endl;

    cout << "Simple Calculator Program" << endl;

    cout << "Supported operations are +, -, *, /" << endl;

    cout << "-----------------------------------" << endl;

    cout << "Enter operator: ";
    cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "-----------------------------------" << endl;
        cout << "Invalid operator! Please enter a valid operator and try agian." << endl;
        cout << "-----------------------------------" << endl;
        return 1;
    }

    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cout << "-----------------------------------" << endl;
        cout << "Invalid input! Please enter a valid number and try again." << endl;
        cout << "-----------------------------------" << endl;
        return 1;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2) && op != '/') {
        cout << "-----------------------------------" << endl;
        cout << "Ivalid input! Please enter a valid number and try again." << endl;
        cout << "-----------------------------------" << endl;
        return 1;
    } else if (num2 == 0 && op == '/') {
        cout << "-----------------------------------" << endl;
        cout << "Error! Dibvision by zero is not allowed. Please enter a valid number and try again." << endl;
        cout << "-----------------------------------" << endl;
        return 1;
    }

    calculate(num1, num2, op);

    cout << "-----------------------------------" << endl;

    cout << "Program Ended" << endl;

    cout << "Thank you for using the program" << endl;

    cout << "-----------------------------------" << endl;

    return 0;
}