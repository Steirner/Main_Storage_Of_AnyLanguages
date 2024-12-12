//Matthew A. Alegre
//Act-1A
//Input and search 

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the number of strings from the user.
  int n;
  cout << "Enter the number of strings: ";
  cin >> n;
  // Create an array of strings to store the input strings.
  string* strings = new string[n];

  // Get the strings from the user and store them in the array.
  cout << "Enter the strings:\n";
  for (int i = 0; i < n; i++) {
    cin >> strings[i];
  }
  // Print the array of strings.
  cout << "\nThe array of strings is:\n";
  for (int i = 0; i < n; i++) {
    cout << strings[i] << endl;
  }
  // Get the string to search for from the user.
  string searchString;
  cout << "\nEnter the string to search for: ";
  cin >> searchString;
  // Search for the string in the array.
  bool found = false;
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (strings[i] == searchString) {
      found = true;
      index = i;
      break;
    }
  }
  // Print the result of the search.
  if (found) {
    cout << "\nThe string was found at index " << index << endl;
  } else {
    cout << "\nThe string was not found in the array." << endl;
  }
  // Delete the array of strings.
  delete[] strings;

  return 0;
}
