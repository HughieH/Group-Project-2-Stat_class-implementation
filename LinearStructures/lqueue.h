#ifndef LQUEUE_H
#define LQUEUE_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

#include "queue.h"
#include "link.h"

// Linked queue implementation
template <typename E> class LQueue: public Queue<E> {
private:
  Link<E>* front; // Pointer to front queue node
  Link<E>* rear; // Pointer to rear queue node
  int size; // Number of elements in queue
public:
  LQueue(int size = 10) {
    front = rear = new Link<E>();
    size = 0;
  }// Constructor
  ~LQueue() {
    clear(); // Destructor
    delete front;
  }
  void clear() {                 // Clear queue
    while(front->next != NULL) { // Delete each link node
      rear = front;
      front = front->next;
      delete rear;
    }
    rear = front;
    size = 0;
  }
  void enqueue(const E& it) { // Put element on rear
    rear->next = new Link<E>(it, NULL);
    rear = rear->next;
    size++;
  }
  E dequeue() { // Remove element from front
    Assert(size != 0, "Queue is empty");
    E it = front->next->element; // Store dequeued value
    Link<E>* ltemp = front->next; // Hold dequeued link
    front->next = ltemp->next; // Advance front
    if (rear == ltemp) rear = front; // Dequeue last element
    delete ltemp; // Delete link
    size --;
    return it; // Return element value
  }
  const E& frontValue() const { // Get front element
    Assert(size != 0, "Queue is empty");
    return front->next->element;
  }
  virtual int length() const { return size; }
};


#endif // LQUEUE_H
