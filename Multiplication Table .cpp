//Matthew Alegre 
//ACT-1A 
//Multiplication Table
#include <iostream>
using namespace std;


void displayMultiplicationTable(int num) {
    for (int i = 1; i <= 10; ++i) {
        int result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
}

int main() {
    int number;

    // ask user what typing numbers 
    cout << "Enter a number: ";
    cin >> number;

    // call of the function of the multiplication table 
    displayMultiplicationTable(number);

    return 0;
}
