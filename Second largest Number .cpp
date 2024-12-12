//Matthew A Alegre 
//ACT-1A
//Second largest Number 

#include <iostream>
#include <array>

using namespace std;

int main() {
  
  array<int, 6> arr = {12, 35, 1, 10, 34, 1};

  
  int largest = arr[0];
  int secondLargest = arr[0];
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
    }
  }

  
  if (largest == secondLargest) {
    cout << "There is no second largest element." << endl;
  } else {
    cout << "Second largest element is " << secondLargest << endl;
  }

  return 0;
}
