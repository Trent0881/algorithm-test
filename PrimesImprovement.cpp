#include <iostream>

// This code should print out the prime numbers.
//
// Task: Fix and improve the algorithm
//
// NOTE: My fix for the original algorithm is made by changing the initial 'j' value to 2 instead of 1 in the inner loop.
//   Starting at 1 was causing numbers divisible by 1 (which is all numbers) to be incorrectly eliminated from being prime
//
// The logic of the current algorithm is that time efficiency is more important to maximize, using a quicker algorithm than before
//   This is a well-known mathematical algorithm for primality testing

int main() {
  // Tell the user the purpose of the program
  std::cout << "Printing primes from 1 to 100" << std::endl;

  // The largest value to consider if it is prime
  int largest_val = 100;
  // A C-style array of booleans, indicating if the integer index of the array is prime
  bool list_of_primes[largest_val];
  // Initially, we assume all values are prime (NOTE: Only consider integers greater than 2, as 0 and 1 are neither prime nor composite)
  for (int i = 2; i < largest_val; i++) {
    list_of_primes[i] = true;
  }

  int i;
  int j;
  // Iterate from the smallest prime number to the square root of the largest value to check (sqrt(100) = 10)
  for (i = 2; i <= 10; i++) {
  // If the integer i has not been marked as non-prime, we want to check if we can eliminate it as non-prime with this value of 'i'
    if (list_of_primes[i] != false) {
      // Check possible values for primality
      for (j = i*i; j <= largest_val; j=j+i) {
        // All of these 'j' values are non-prime
        list_of_primes[j] = false;
      }
    }
  }

  // Now print all values in our array that were never marked as non-prime
  int k;
  for (k = 2; k < largest_val; k++) {
      if (list_of_primes[k] == true) {
      std::cout << k << " ";
    }
  }
  std::cout << std::endl;
}

