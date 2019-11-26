#ifndef LINK_H
#define LINK_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#include <iostream>

// Singly linked list node with freelist support
template <typename E> class Link {
private:
  static Link<E>* freelistSL; // Reference to freelist head
public:
  E element; // Value for this node
  Link* next; // Point to next node in list
  // Constructors
  Link(const E& elemval, Link* nextval =NULL){
    element = elemval;
    next = nextval;
  }
  Link(Link* nextval =NULL) {
    next = nextval;
  }
  void* operator new(size_t) { // Overloaded new operator
    if (freelistSL == NULL) return ::new Link; // Create space
    Link<E>* temp = freelistSL; // Can take from freelist
    freelistSL = freelistSL->next;
    return temp; // Return the link
  }
  // Overloaded delete operator
  void operator delete(void* ptr) {
    ((Link<E>*)ptr)->next = freelistSL; // Put on freelist
    freelistSL = (Link<E>*)ptr; // We need casting because we are using void pointers here
  }
};
// The freelist head pointer is actually created here
template <typename E>
Link<E>* Link<E>::freelistSL = NULL;

#endif // LINK_H
