#include "link.h"
#include "dlink.h"
// #include "alist.h"
#include "llist.h"
#include "dllist.h"
// #include "astack.h"
// #include "lstack.h"
// #include "aqueue.h"
// #include "lqueue.h"

#include <iostream>

// template <typename E>
// DLink<E>* DLink<E>::freelist = NULL;  // The freelist head pointer is actually created here


int main(int argc, char *argv[])
{
  // std::cout << "All is good" << "\n";

  // AList<int> int_array_list(20);
  // LList<int> int_linked_list;
  DLList<int> int_doubly_linked_list;

  for (int i = 1; i < 12; i++)
  {
    int_doubly_linked_list.append(i);// Default size is 10 but no warning as list allow dynamic resizing
  }

  // std::cout << "In the array list, the current length is: " <<int_array_list.length() << "  current node, " <<   int_array_list.remove() << " has been removed" << " the new length is: " <<int_array_list.length() <<"\n";

  // std::cout << "In the singly linked list, the current length is: " <<int_linked_list.length() << "  current node, " <<   int_linked_list.remove() << " has been removed" << " the new length is: " <<int_linked_list.length() <<"\n";

  std::cout << "In the doubly linked list, the current length is: " 
    <<int_doubly_linked_list.length() << "\n";

  /* test printing mirror */
  // int_doubly_linked_list.printMirrorDLLIST();

  // std::cout << "In the array list, the current length is: " <<int_array_list.length() << "  current node, " <<   int_array_list.remove() << " has been removed" << " the new length is: " <<int_array_list.length() <<"\n";

  // std::cout << "In the singly linked list, the current length is: " <<int_linked_list.length() << "  current node, " <<   int_linked_list.remove() << " has been removed" << " the new length is: " <<int_linked_list.length() <<"\n";

  /* testing min max*/
  // int min = int_doubly_linked_list.get_min();
  // int max = int_doubly_linked_list.get_max();
  // std::cout << "\nThe min of my dllist is: " <<  min << std::endl;
  // std::cout << "\nThe max of my dllist is: " <<  max << std::endl;



  // int the_mean = int_doubly_linked_list.get_mean();
  // std::cout << "the mean of this doubly llist is: " << the_mean << std::endl;
return 0;

}

