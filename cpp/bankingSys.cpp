#include <iostream>
using namespace std;

void create_account(string *uname, string *pass);
void login(string username, string password, bool *isloggedin);
void show_balance(double balance, bool islogged);
double deposit(double *balance, bool islogged);
double withdraw(double *balance, bool islogged);
double transfer(double *balance, bool islogged);

int main() {
    double balance = 0;
    string username, password;
    bool isrunning = true;
    bool islogged;

    cout << "------------------------------------" << endl;
    cout << "Welcome to the banking software!" << endl;
    cout << "------------------------------------" << endl;
    cout << "Please select an option between 1-7" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Create account" << endl;
    cout << "2. Login" << endl;
    cout << "3. Show balance" << endl;
    cout << "4. Deposit" << endl;
    cout << "5. Withdraw" << endl;
    cout << "6. Transfer" << endl;
    cout << "7. Logout" << endl;
    cout << "------------------------------------" << endl;

    while (isrunning) {
        int option;
        cout << "Enter option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "------------------------------------" << endl;
                create_account(&username, &password);
                cout << "------------------------------------" << endl;
                break;
            case 2:
                cout << "------------------------------------" << endl;
                login(username, password, &islogged);
                cout << "------------------------------------" << endl;
                break;
            case 3:
                cout << "------------------------------------" << endl;
                show_balance(balance, islogged);
                cout << "------------------------------------" << endl;
                break;
            case 4:
                cout << "------------------------------------" << endl;
                deposit(&balance, islogged);
                cout << "------------------------------------" << endl;
                break;
            case 5:
                cout << "------------------------------------" << endl;
                withdraw(&balance, islogged);
                cout << "------------------------------------" << endl;
                break;
            case 6:
                cout << "------------------------------------" << endl;
                transfer(&balance, islogged);
                cout << "------------------------------------" << endl;
                break;
            case 7:
                isrunning = false;
                break;
            default:
                cout << "------------------------------------" << endl;
                cout << "Invalid option. Please try again." << endl;
                cout << "------------------------------------" << endl;
                break;
        }
    }

    cout << "------------------------------------" << endl;
    cout << "Thank you for using the banking software." << endl;
    cout << "------------------------------------" << endl;
}

void create_account(string *uname, string *pass) {
    cout << "Creating account..." << endl;
    cout << "Enter your details" << endl;
    cout << "Username: ";
    cin >> *uname;
    cout << "Password: ";
    cin >> *pass;
    cout << "Account created successfully!" << endl;
    cout << "Please login to continue." << endl;
}

void login(string username, string password, bool *isloggedin) {
    *isloggedin = false;
    cout << "Logging in..." << endl;
    cout << "Enter your details" << endl;
    string input_username, input_password;
    cout << "Username: ";
    cin >> input_username;
    cout << "Password: ";
    cin >> input_password;

    if (input_username == username && input_password == password) {
        cout << "Login successful!" << endl;
        *isloggedin = true;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }
}

void show_balance(double balance, bool islogged) {
    if (islogged == true) {
        cout << "Your balance is: " << "$" << balance << endl;
    } else {
        cout << "Please login to view your balance." << endl;
    }
}

double deposit(double *balance, bool islogged) {
    if (islogged == true) {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount < 0) {
            cout << "Invalid amount." << endl;
        } else {
            *balance += amount;
            cout << "Deposit successful!" << endl;
        }
    } else {
        cout << "Please login to deposit money." << endl;
    }
    return *balance;
}

double withdraw(double *balance, bool islogged) {
   if (islogged == true) {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > *balance) {
            cout << "Insufficient balance." << endl;
        } else {
            *balance -= amount;
            cout << "Withdrawal successful!" << endl;
        }
   } else {
        cout << "Please login to withdraw money." << endl;
   }
   return *balance;
}

double transfer(double *balance, bool islogged) {
    if (islogged == true) {
        double amount;
        cout << "Enter amount to transfer money: ";
        cin >> amount;
        if (amount > *balance) {
            cout << "Insufficient balance." << endl;
        } else {
            *balance -= amount;
            cout << "Balance transfer successful!" << endl;
        }
    } else {
        cout << "Please login to transfer money." << endl;
    }
    return *balance;
}