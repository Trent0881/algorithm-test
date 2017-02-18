#include <iostream>

// This code will not compile correctly until you fix it.
//
// We are trying to count the number of times the word
// dog appears in some input text, but we can't seem to
// remember the appropriate method call in the string class,
// and are not sure our approach will work.
//
// Task: Use the C++ documentation to help us finish the code,
// then discuss the ambiguity in the problem description, and
// reword it to remove the ambiguity in the space provided below.
//
// The program as I am submitting finds any matches to the three characters "dog",
//   including compound words containing the word "dog" (e.g. "hotdogs") and hyphenated words
//   such as "dog-like". On the other hand, it doesn't find the word in the words "Dogman" or "Doglips" because the 'D' is capitalized.
//   This matching may or may not be appropriate depending on the application of this program.
//
// A better phrasing of the problem that better matches the current functionality of the program would be as follows:
//
// "We are trying to count the number of times the string of characters "dog" appears in some input text.
//   We want to match to any string of characters matching this description, regardless of what appears after or before it
//   (in the language of regular expressions: "dog*"), but not including capitalizations such as "Dog", "dOg", or "DOG"."
//

int main() {
  std::string input = "The Dogman was no ordinary dog, nor man, but rather a peculiar dog-like man who barked like a dog, and panted like a dog, he even ate like a dog.  He owned a dog named Doglips, and interestingly enough, his favorite food was hotdogs.";
  int index = -1;
  int count = 0;
  std::cout << "Counting dogs:";
  do {
    // NOTE: Code changed from original here. Proper method name is "find", and we added to the functional call the index in the string to start searching from so we don't keep finding the same expression
    index = input.find("dog", index + 1);
    if (index != -1) {
      count++;
      std::cout << index << " ";
    }
  } while (index != -1);
  std::cout << "The word \"dog\" appears " << count << " times." << std::endl;
}




