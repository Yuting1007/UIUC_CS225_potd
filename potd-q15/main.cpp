#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node * first = new Node();
  first -> data_ = 1;
  cout << stringList(first) << endl;
  // Test 3: A list with more than one node
  Node *second = new Node();
  second -> data_ = 2;
  first -> next_ = second;
  cout << stringList(second) << endl;

  return 0;
}
