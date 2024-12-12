//Student Grade
//Matthew A. Alegre
//ACT-!A

#include <iostream>

using namespace std;

int main() {
    int exam1, exam2, exam3;
    double average;

    cout << "Enter the score for exam 1 (0-99): ";
    cin >> exam1;

    cout << "Enter the score for exam 2 (0-99): ";
    cin >> exam2;

    cout << "Enter the score for exam 3 (0-99): ";
    cin >> exam3;

    average = (exam1 + exam2 + exam3) / 3.0;

    cout << "Average score: " << average << endl;

    char grade;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Final Grade: " << grade << endl;

    switch (grade) {
        case 'A':
            cout << "Excellent job!" << endl;
            break;
        case 'B':
            cout << "Good work!" << endl;
            break;
        default:
            cout << "Keep trying, you can do better!" << endl;
    }

    return 0;
}
