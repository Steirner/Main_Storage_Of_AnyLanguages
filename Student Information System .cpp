//Student Information System
// Matthew A. Alegre
// Act-1A
#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

int main() {
  string name;
  int id;
  int age;
  char gender;
  double englishGrade, filipinoGrade, scienceGrade;
  double gwa;

  // Get student information from the user
  cout << "Enter student name: ";
  getline(cin, name);

  cout << "Enter student ID: ";
  cin >> id;

  cout << "Enter student age: ";
  cin >> age;

  cout << "Enter student gender (M/F): ";
  cin >> gender;

  // Get grades for 3 subjects
  cout << "Enter English grade: ";
  cin >> englishGrade;

  cout << "Enter Filipino grade: ";
  cin >> filipinoGrade;

  cout << "Enter Science grade: ";
  cin >> scienceGrade;

  // Calculate GWA
  gwa = (englishGrade + filipinoGrade + scienceGrade) / 3;

  // Display the entered student information in a formatted way
  cout << "\nStudent Information:\n";
  cout << "--------------------\n";
  cout << "Name: " << name << endl;
  cout << "ID: " << id << endl;
  cout << "Age: " << age << endl;
  cout << "Gender: " << gender << endl;
  cout << "GWA (English, Filipino, Science): " << fixed << setprecision(2) << gwa << endl; // Format GWA to 2 decimal places
  cout << "-- End of Program --" << endl;

  return 0;
}
