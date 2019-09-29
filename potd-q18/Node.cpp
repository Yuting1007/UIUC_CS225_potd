#include "Node.h"

// void mergeList(Node *first, Node *second) {
  // your code here!
//   if(first==NULL){
//       return;
//   }
//
//   while(second != NULL){
//       Node *curr1 = first;
//       Node *curr2 = second;
//       //merge
//       curr2->next_ = curr1->next_;
//       curr1->next_ = curr2;
//       //move the first and second pointer
//       first = first->next_->next_;
//       second = second->next_;
//   }
// }
void mergeList(Node *first, Node *second) {
  	if (second == NULL) {return;}
  	Node * temp2;
  	while (first != NULL) {
  		if (second != NULL){
  			if (first->next_ == NULL) {
  				first->next_ = second;
  				return;
  			}
  			temp2 = second->next_;
  			second->next_ = first->next_;
  			first->next_ = second;
  			second = temp2;
		}
  		first = first->next_->next_;
  	}
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
