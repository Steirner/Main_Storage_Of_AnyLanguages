//MovieTicketingSystem
//Matthew A. Alegre
//ACT-1A 

#include <iostream>
#include <limits>

using namespace std;

int main() {
    int age;
    string type; // senior, student, or ordinary
    char loyalty; // Y for yes, N for no

    cout << "============================================" << endl;
    cout << "==|Welcome to the movie ticketing system!|==" << endl;
    cout << "============================================" << endl;

    // Input age with validation
    while (true) {
        cout << "\nEnter Your age: ";
        cin >> age;

        // Check if input is valid
        if (cin.fail() || age < 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid age." << endl;
        } else {
            break; // Valid input
        }
    }

    // Input type with validation
    while (true) {
        cout << "Are you a student or senior (senior/student/ordinary): ";
        cin >> type;

        if (type == "senior" && age < 60) {
            cout << "You must be at least 60 years old to qualify for senior discount." << endl;
        } else if (type == "senior" || type == "student" || type == "ordinary") {
            break; // Valid input
        } else {
            cout << "Invalid input. Please enter 'senior', 'student', or 'ordinary'." << endl;
        }
    }

    // Input loyalty program membership with validation
    while (true) {
        cout << "Are you a loyalty program member (Y/N): ";
        cin >> loyalty;

        if (loyalty == 'Y' || loyalty == 'y' || loyalty == 'N' || loyalty == 'n') {
            break; // Valid input
        } else {
            cout << "Invalid input. Please enter 'Y' for yes or 'N' for no." << endl;
        }
    }

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
        cout << "You are eligible for a 20% senior citizens discount" << endl;
    } else if (type == "student") {
        cout << "You are eligible for a 20% student discount" << endl;
    } else {
        cout << "You are not eligible for any discount" << endl;
    }

    if (loyalty == 'Y' || loyalty == 'y') {
        cout << "You are eligible for an additional 10% loyalty member discount" << endl;
    } else {
        cout << "You are not eligible for a 10% loyalty member discount" << endl;
    }

    cout << "Your final ticket price is: " << finalPrice << " PHP" << endl;

    return 0;
}
