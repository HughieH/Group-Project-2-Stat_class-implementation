#ifndef LSTACK_H
#define LSTACK_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#include "stack.h"
#include "link.h"

#include "iostream"

// Linked stack implementation
template <typename E> class LStack: public Stack<E> {
private:
  Link<E>* top; // Pointer to first element
  int size; // Number of elements
public:
  LStack(int sz = 10) // Constructor
  { top = NULL; size = 0; }
  ~LStack() {
    clear();
  } // Destructor
  void clear() { // Reinitialize
    while (top != NULL) { // Delete link nodes
        Link<E>* temp = top;
        top = top->next;
        delete temp;
      }
    size = 0;
  }
  void push(const E& it) { // Put "it" on stack
    top = new Link<E>(it, top);
    size++;
  }
  E pop() { // Remove "it" from stack
    Assert(top != NULL, "Stack is empty");
    E it = top->element;
    Link<E>* ltemp = top->next;
    delete top;
    top = ltemp;
    size--;
    return it;
  }
  const E& topValue() const { // Return top value
    Assert(top != 0, "Stack is empty");
    return top->element;
  }
  int length() const { return size; } // Return length
};


#endif // LSTACK_H
