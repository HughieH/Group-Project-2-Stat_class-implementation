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
#include <algorithm>

// template <typename E>
// DLink<E>* DLink<E>::freelist = NULL;  // The freelist head pointer is actually created here


int main(int argc, char *argv[])
{
  // std::cout << "All is good" << "\n";

  DLList<int> int_doubly_linked_list;
  int the_list[9] = {1, 3, 1, 1, 3, 3, 2, 9, -1};
  for(auto const&i : the_list)
  {
    int_doubly_linked_list.append(i);
  }



  std::cout << "In the doubly linked list, the current length is: " 
    <<int_doubly_linked_list.length_total() << "\n\n";

  /* test printing mirror */
  // int_doubly_linked_list.printMirrorDLLIST();

  /* testing get_mode */
  // int the_mode = int_doubly_linked_list.get_mode();
  // std::cout << "\nthe mode of my dllist is " << the_mode << std::endl;

  /* testing min max */
  // int min = int_doubly_linked_list.get_min();
  // int max = int_doubly_linked_list.get_max();
  // std::cout << "\nThe min of my dllist is: " <<  min << std::endl;
  // std::cout << "\nThe max of my dllist is: " <<  max << std::endl;
  
  // /* testing index overload[] */
  std::cout << "\ntesting [] indexing: " << std::endl;
  std::cout << "[6] = " << int_doubly_linked_list[6] << std::endl;

  /* testing get_mean */
  // int the_mean = int_doubly_linked_list.get_mean();
  // std::cout << "the mean of this doubly llist is: " << the_mean << std::endl;

  /* testing length_unique */
  // std::cout << "\nThe length of only the unique elements is " << 
  //   int_doubly_linked_list.length_unique() << std::endl;
  
  /* testing get_median */
  // DLList<int> ordered_dllist;
  // int the_list2[8] = {1, 10, -2, 3, 6, 2, 9, -1};
  // std::sort(the_list2, the_list2 + 8);
  // for(auto const&i : the_list2)
  // {
  //   ordered_dllist.append(i);
  // }
  // ordered_dllist.printMirrorDLLIST();
  // std::cout << "\nthe median of my dllist is " << ordered_dllist.get_median()
  //   << std::endl;

  return 0;

}

