// Matthew A. Alegre
// Act-1A
// calculateAverage


#include <iostream>
#include <iomanip> // for setprecision 

using namespace std;

// Function to calculate the average of three test scores
double calculateAverage(int score1, int score2, int score3) {
    return (score1 + score2 + score3) / 3; // Calculate and return the average
}

int main() {
    int score1, score2, score3;

    // Prompt the user to enter three test scores
    cout << "Enter three test scores:" << endl;
    cin >> score1;
    cin >> score2;
    cin >> score3;

    // Call the calculateAverage function
    double averageScore = calculateAverage(score1, score2, score3);

    // Display the average score with two decimal places
    cout << fixed << setprecision(2); // Set the precision for floating-point output
    cout << "The average score is: " << averageScore << endl;

    return 0;
}
