//Convert Days to Years, Weeks, and Days
//Matthew A. Alegre
//ACT-1A
#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

int main() {
  int totalDays, years, weeks, days;

  cout << "Enter the number of days: ";
  cin >> totalDays;

  // Calculate years
  years = totalDays / 365;

  // Calculate remaining days after years
  int remainingDays = totalDays % 365;

  // Calculate weeks
  weeks = remainingDays / 7;

  // Calculate remaining days after weeks
  days = remainingDays % 7;

  cout << totalDays << " days is equal to " << years << " years, " << weeks << " weeks, and " << days << " days." << endl;

  return 0;
}
