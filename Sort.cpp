#include <iostream>
#include <cstdlib>
#include <ctime>

// This code will sort the numbers in the array.
//
// Task: Modify the algorithm to reverse the sort, then comment on its efficiency in the space
// provided below:
//
// Space complexity: The algorithm uses twice as much as memory as the number of integers to sort.
//    This is not ideal because there are algorithms that can sort "in place" by using the original array to store the new array
// Time complexity: The algorithm uses approximately O(n*log(n)) operations (depending on the contents of the random input array),
//    and is suitably efficient for this type of input.
// Overall: The algorithm could use general improvements for to reduce overall number of operations or improve flexibility of inputs,
//    but is a well-designed algorithm generally speaking.
//

// Entry point for a program that algorithmically sorts an arbitrary random array of integers
int main() {
  // Declare C-style array to hold an unsorted input array of integers
  int unsorted[100] = {};
  // Seed random number generation
  srand (time(NULL));
  // Prepare unsorted array
  for (int i = 0; i < 100; i++) {
    unsorted[i] = rand() % 100;
  }
  // Declare input array to user through terminal
  std::cout << "Here are the unsorted numbers:" << std::endl;
  for (int i = 0; i < 100; i++) {
    std::cout << unsorted[i] << " ";
  }
  std::cout << std::endl;
  // Declare array to hold sorted output array
  int sorted[100] = {};
  // For each final value in the sorted array...
  // (NOTE: The only code I changed was the following line, iterating down from 100 instead of iterating up from 0)
  for (int i = 99; i > -1; i--) {
    // Declare placeholder array value and array index variables as "null" values
    int hi = -1;
    int hiIndex = -1;
    // ...iterate through the input array to find the largest value it has
    for (int j = 0; j < 100; j++) {
      if (unsorted[j] > hi) {
        // Record that smallest value and the index where that value was found
        hi = unsorted[j];
        hiIndex = j;
      }
    }
    // Put the found value into the sorted array
    sorted[i] = hi;
    // Null out the found value so we don't find it and sort it into the output array again
    unsorted[hiIndex] = -1;
  }
  // Declare the resulting output array for the user
  std::cout << "Here are the sorted numbers:" << std::endl;
  for (int i = 0; i < 100; i++) {
    std::cout << sorted[i] << " ";
  }
  std::cout << std::endl;
}

