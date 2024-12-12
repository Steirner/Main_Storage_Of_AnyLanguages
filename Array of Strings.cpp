//Matthew A Alegre 
//ACT-1A
//Array of Strings

#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
  // Get the number of strings from the user
  int n;
  cout << "How many strings do you want to input? ";
  cin >> n;

  // Create an array to store the strings
  array<string, 100> strings;

  // Get the strings from the user
  for (int i = 0; i < n; i++) {
    cout << "Enter string " << i + 1 << ": ";
    cin >> strings[i];
  }

  // Get the string to search for
  string searchString;
  cout << "Enter a string to search: ";
  cin >> searchString;

  // Print the strings that were entered
  cout << "You entered the following strings:" << endl;
  for (int i = 0; i < n; i++) {
    cout << strings[i] << endl;
  }

  // Search for the string
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (strings[i] == searchString) {
      index = i;
      break;
    }
  }

  // Print the results of the search
  if (index != -1) {
    cout << "The string \"" << searchString << "\" is found at index " << index << "." << endl;
  } else {
    cout << "The string \"" << searchString << "\" was not found." << endl;
  }

  return 0;
}
