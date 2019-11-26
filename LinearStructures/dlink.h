#ifndef DLINK_H
#define DLINK_H

#include <iostream>
// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// Doubly linked list link node with freelist support
template <typename E> class DLink {
private:
  static DLink<E>* freelist; // Reference to freelist head

public:
  E element;       // Value for this node
  DLink* next;         // Pointer to next node in list
  DLink* prev;         // Pointer to previous node

  // Constructors
  DLink(const E& it, DLink* prevp, DLink* nextp) {
    element = it;
    prev = prevp;
    next = nextp;
  }
  DLink(DLink* prevp =NULL, DLink* nextp =NULL) {
    prev = prevp;
    next = nextp;
  }

  void* operator new(size_t) {  // Overloaded new operator
    if (freelist == NULL) return ::new DLink; // Create space
    DLink<E>* temp = freelist; // Can take from freelist
    freelist = freelist->next;
    return temp;                 // Return the link
  }

  // Overloaded delete operator
  void operator delete(void* ptr) {
    ((DLink<E>*)ptr)->next = freelist; // Put on freelist
    freelist = (DLink<E>*)ptr;
  }
};

// The freelist head pointer is actually created here
template <typename E>
DLink<E>* DLink<E>::freelist = NULL;

#endif // DLINK_H
