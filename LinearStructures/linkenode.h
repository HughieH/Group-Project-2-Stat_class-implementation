#ifndef LINKENODE_H
#define LINKENODE_H
#include <iostream>

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// Singly linked list node. I renamed Link in the book code to LinkeNode
// to avoid redefinition the same in freelist
template <typename E> class LinkNode {
public:
  E element; // Value for this node
  LinkNode *next; // Pointer to next node in list
  // Constructors
  LinkNode(const E& elemval, LinkNode* nextval =NULL){
    element = elemval; //const here guarantees nextval is safe from change
    next = nextval;
  }
  LinkNode(LinkNode* nextval =NULL) {
    next = nextval;
  }
};

#endif // LINKENODE_H
