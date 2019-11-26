#ifndef DLLIST_H
#define DLLIST_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#include "list.h"
#include "dlink.h"
#include <iostream>

// Doubly Linked list implementation
template <typename E> class DLList: public List<E> {
private:
  DLink<E>* head; // Pointer to list header
  DLink<E>* tail; // Pointer to last element
  DLink<E>* curr; // Access to current element
  int cnt; // Size of list
  void init() { // Initialization helper method
    curr = head = new DLink<E>;
    head->next = tail = new DLink<E>(head, NULL);
    cnt = 0;
  }
  void removeall() { // Return link nodes to free store
    while(head != NULL) {
        curr = head;
        head = head->next;
        delete curr;
      }
  }
public:
  DLList(int size = 10) {
    init(); // Constructor. Replace defaultSize (now 10) with the default you want otherwise leave empty
  }
  ~DLList() { // Be very careful when you copy from pdf the tilde will not get copied properly so be sure to replace with actual
    removeall(); // Destructor
  }
  void print() const; // Print list contents
  void clear() {
    removeall();
    init(); // Clear list
  }
  // Insert "it" at current position
  void insert(const E& it) {
    curr = new DLink<E>(it, curr->prev, curr);
    curr->next->prev = curr;// I had trouble getting the insert to work properly
    cnt++; // As you woiuld see from the driver, it still work but there is a missed step
    // Please let me know if anyone could fixed it

  }
  // Append "it" to the end of the list.
  void append(const E& it) {
    tail->prev = tail->prev->next =
        new DLink<E>(it, tail->prev, tail);
    cnt++;
  }
  // Remove and return current element
  E remove() {
    if (curr->next == tail) // Nothing to remove
      return 0;
    E it = curr->next->element; // Remember value
    DLink<E>* ltemp = curr->next; // Remember link node
    curr->next->next->prev = curr;
    curr->next = curr->next->next; // Remove from list
    delete ltemp; // Reclaim space
    cnt--; // Decrements cnt
    return it;
  }
  // Move fence one step left; no change if left is empty
  void prev() {
    if (curr != head) // Can’t back up from list head
      curr = curr->prev;
  }

  // Place curr at list start
  void moveToStart() {
    curr = head;
  }
  // Place curr at list end
  void moveToEnd(){
    curr = tail;
  }

  // Move curr one step right; no change if already at end
  void next(){
    if (curr != tail) curr = curr->next;
  }
  int length() const {
    return cnt; } // Return length
  // Return the position of the current element
  int currPos() const {
    DLink<E>* temp = head;
    int i;
    for (i=0; curr != temp; i++)
      temp = temp->next;
    return i;
  }
  // Move down list to "pos" position
  void moveToPos(int pos) {
    Assert ((pos>=0)&&(pos<=cnt), "Position out of range");
    curr = head;
    for(int i=0; i<pos; i++) curr = curr->next;
  }
  const E& getValue() const { // Return current element
    Assert(curr->next != NULL, "No value");
    return curr->next->element;
  }

  void reverse(){

  }
  bool isAtEnd() { return curr == tail; }

};


#endif // DLLIST_H
