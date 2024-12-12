//C++ Arithmetic
//Matthew A. Alegre
//ACT-1A
#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

int main() {
  int num1, num2, num3, num4, num5;
  float result;

  cout << "Enter the first number : ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << "Enter the third number: ";
  cin >> num3;

  cout << "Enter the fourth number : ";
  cin >> num4;

  cout << "Enter the fifth number: ";
  cin >> num5;

  // Calculate the sum of the first and second numbers
  int sum = num1 + num2;
  cout << "Sum of the first and second numbers: " << sum << endl;

  // Calculate the difference of the sum and the third number
  int difference = sum - num3;
  cout << "Difference of the sum and third number: " << difference << endl;

  // Calculate the product of the difference and the fourth number
  int product = difference * num4;
  cout << "Product of the difference and fourth number: " << product << endl;

  // Calculate the division of the product by the fifth number
  result = (float)product / num5;
  cout << "quotient of the difference and fourth number : " << result << endl;

  return 0;
}
