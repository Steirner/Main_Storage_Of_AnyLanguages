//Gross pay Calculator
//Matthew A. Alegre
//ACT-1A

// Gross pay Calculator

#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
  float hoursWorked;
  float payRate;
  float grossPay;

  // Get input from the user
  cout << "Enter the number of hours worked: ";
  cin >> hoursWorked;

  cout << "Enter the pay rate per hour: ";
  cin >> payRate;

  // Calculate gross pay
  grossPay = hoursWorked * payRate;

  // Display the gross pay in a formatted way
  cout << "\n-Gross Pay Summary --\n";
  cout << "Hours Worked: " << hoursWorked << endl;
  cout << "Pay Rate: Php " << fixed << setprecision(2) << payRate << "/hour" << endl;
  cout << "Gross Pay: Php " << fixed << setprecision(2) << grossPay << endl;
  cout << "--- END OF PROGRAM --\n";

  return 0;
}

