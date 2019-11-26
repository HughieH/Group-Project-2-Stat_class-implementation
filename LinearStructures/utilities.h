#ifndef UTILITIES_H
#define UTILITIES_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#include <iostream>
#include <string>

// Utility functions
// Return true iff "x" is even
inline bool EVEN(int x) {
  return (x % 2) == 0;
}
// Return true iff "x" is odd
inline bool ODD(int x) {
  return (x % 2) != 0;
}
// Assert: If "val" is false, print a message and terminate
// the program
void Assert(bool val, std::string s) {
  if (!val) { // Assertion failed -- close the program
      std::cout << "Assertion Failed: " << s << std::endl;
      exit(-1);
      //return;
    }
}
// Swap two elements in a generic array
template<typename E>
inline void swap(E A[], int i, int j) {
  E temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}
// Random number generator functions
inline void Randomize(){  // Seed the generator
  srand(1);
}
// Return a random value in range 0 to n-1
inline int Random(int n) {
  return rand() % (n);
}
// End utility functions


#endif // UTILITIES_H
