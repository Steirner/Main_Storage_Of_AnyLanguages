//ATM Simulation
//Matthew A. Alegre
//ACT_1A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    int attempts = 0;
    double balance = 500.00;
    int option;
    double amount;

    // PIN Verification
    while (attempts < 3) {
        cout << "Welcome to Langbank!" << endl;
        cout << "Enter your ATM PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            break;
        } else {
            attempts++;
            cout << "Incorrect PIN. Try again." << endl;
        }
    }

    if (attempts == 3) {
        cout << "Too many incorrect attempts. Exiting the program." << endl;
        return 0;
    }

    // ATM Menu
    while (true) {
        cout << "ATM Menu" << endl;
        cout << "[1] Withdraw" << endl;
        cout << "[2] Deposit" << endl;
        cout << "[3] Check Balance" << endl;
        cout << "[4] Exit" << endl;
        cout << "Choose Option: ";
        cin >> option;

        switch (option) {
            case 1: // Withdraw
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient Balance! Current Balance is: PHP " << balance << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                }
                break;

            case 2: // Deposit
                cout << "Enter the amount to Deposit: PHP ";
                cin >> amount;
                balance += amount;
                cout << "Deposit Successful. New Balance is: PHP " << balance << endl;
                break;

            case 3: // Check Balance
                cout << "Current Balance: PHP " << balance << endl;
                break;

            case 4: // Exit
                char confirm;
                cout << "Are you sure you want to exit? (Y/N): ";
                cin >> confirm;
                if (confirm == 'Y' || confirm == 'y') {
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    return 0;
                }
                break;

            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
