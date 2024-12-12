//MovieTicketingSystem
//Matthew A. Alegre
//ACT-1A 

#include <iostream>

using namespace std;

int main() {
    int age;
    string type; // senior, student, or ordinary
    char loyalty; // Y for yes, N for no

    cout << "============================================" << endl;
    cout << "==|Welcome to the movie ticketing system!|==" << endl;
    cout << "============================================" << endl;
    cout << "\nEnter Your age: ";
    cin >> age;
    cout << "Are you a student or senior (senior/student/ordinary): ";
    cin >> type;
    cout << "Are you a loyalty program member(Y/N): ";
    cin >> loyalty;

    const int originalPrice = 200; // PHP
    double discount = 0;

    if (type == "senior" || type == "student") {
        discount += 0.2 * originalPrice; // 20% discount
    }

    if (loyalty == 'Y' || loyalty == 'y') {
        discount += 0.1 * (originalPrice - discount); // 10% discount
    }

    double finalPrice = originalPrice - discount;

    cout << "\n===============" << endl;
    cout << "==| Receipt |==" << endl;
    cout << "===============" << endl;
    cout << "\nOriginal Ticket Price: " << originalPrice << " PHP" << endl;
    if (type == "senior") {
        cout << "\nYou are eligible for a 20% senior citizens discount" << endl;
    } else if (type == "student") {
        cout << "You are eligible for a 20% student discount" << endl;
    } else {
        cout << "You are not eligible for any discount" << endl;
    }
    if (loyalty == 'Y' || loyalty == 'y') {
        cout << "You are eligible for an additional 10% loyalty member discount" << endl;
    } else {
        cout << "You are not eligible for an 10% loyalty member discount" << endl;
    }
    cout << "Your final ticket price is: " << finalPrice << " PHP" << endl;

    return 0;
}
