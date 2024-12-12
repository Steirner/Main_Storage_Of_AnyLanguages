//Matthew A. Alegre
//Act-1A
//Mini Coffee Ordering System 

#include <iostream>
#include <limits>
#include <string>

using namespace std;

void displayMenu() {
    cout << "Coffee Menu:\n";
    cout << "1. Espresso\n";
    cout << "2. Cappuccino\n";
    cout << "3. Latte\n";
    cout << "4. Americano\n";
}

void displaySizeMenu() {
    cout << "Select size\n";
    cout << "1. Small Php 60.00\n";
    cout << "2. Medium Php 70.00\n";
    cout << "3. Large Php 80.00\n";
}

int main() {
    int coffeeChoice, sizeChoice, quantity;
    char tryAgain;

    do {
        displayMenu();
        cout << "Enter coffee choice (1-4): ";
        cin >> coffeeChoice;

        // Check for valid coffee choice
        if (coffeeChoice < 1 || coffeeChoice > 4) {
            cout << "Error: Invalid coffee choice!\n";
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
            continue;
        }

        displaySizeMenu();
        cout << "Choice: ";
        cin >> sizeChoice;

        // Check for valid size choice
        if (sizeChoice < 1 || sizeChoice > 3) {
            cout << "Error: Invalid choice!\n";
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        // Check for valid quantity
        if (cin.fail() || quantity <= 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Error: Quantity must be greater than zero!\n";
            cout << "Do you want to try again? (y/n): ";
            cin >> tryAgain;
            continue;
        }

        // Calculate total price
        int price = 0;
        switch (sizeChoice) {
            case 1: price = 60; break; // Small
            case 2: price = 70; break; // Medium
            case 3: price = 80; break; // Large
        }

        double totalPrice = price * quantity;
        cout << "Order placed successfully!\n";
        cout << "Total Price: Php " << totalPrice << ".00\n";
        cout << "Thank you for using the coffee ordering system!\n";

        cout << "Do you want to place another order? (y/n): ";
        cin >> tryAgain;

    } while (tryAgain == 'y' || tryAgain == 'Y');

    cout << "Thank you for using the coffee ordering system!\n";
    return 0;
}
