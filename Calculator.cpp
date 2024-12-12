//Calculator
//Matthew A. Alegre
//ACT-1A
#include <iostream>
using namespace std;

int main() {
    char operator_;
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator (+, - *, /): ";
    cin >> operator_;
    switch(operator_) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2!= 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Invalid operator.";
            break;
    }
    return 0;
}
