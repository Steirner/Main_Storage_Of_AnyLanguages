//SnackVendingMachine
//Matthew A. Alegre
//ACT-1A

#include <iostream>
using namespace std;

int main() {
  int choice, quantity, money;

  // Display menu
  cout << "\n ==============================" << endl;
  cout << "\n |==Welcome to Snack Machine!==|" << endl;
  cout << "\n ==============================" << endl;
  
  
  cout << "\n - MENU-" << endl;
  cout << "\n [1] Potato chips - 30 PHP" << endl;
  cout << "\n [2] Pringles - 40 PHP" << endl;
  cout << "\n [3] Dingdong - 50 PHP" << endl;

  // Get user input
  cout << "\n Enter your choice: ";
  cin >> choice;

  cout << "\n Enter quantity: ";
  cin >> quantity;

  // Calculate cost
  int cost = 0;
  if (choice == 1) {
    cost = 30 * quantity;
  } else if (choice == 2) {
    cost = 40 * quantity;
  } else if (choice == 3) {
    cost = 50 * quantity;
  }

  // Get amount of money user has
  cout << "\n Enter the amount of money you have: ";
  cin >> money;

  // Check if user has enough money
  if (money < cost) {
    cout << "\n You don't have enough money." << endl;
  } else {
    // Calculate change
    int change = money - cost;

    // Output to user
    cout << "\n Please take your order!" << endl;
    cout << "\n Your change is " << change << " PHP." << endl;
    cout << "\n Thank you and come again!" << endl;
  }

  return 0;
}
