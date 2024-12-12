//Finding Largest Number
//Matthew A. Alegre
//ACT-1A

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, largest;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        largest = num1;
    } else if (num2 > num1 && num2 > num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    cout << "The largest number is " << largest << endl;

    return 0;
}
