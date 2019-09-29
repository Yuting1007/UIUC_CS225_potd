#include "Node.h"

void sortList(Node **head) {  // This is selection sort algorithm
      if ( (*head) == NULL || (*head)->next_ == NULL) {return;}

      // find minimum node, and put in front of first node
  Node * prev = NULL;
  Node * min = (*head);
  Node * cur = (*head);
  while (cur->next_ != NULL) {
      if (min->data_ > cur->next_->data_) {
          min = cur->next_;
          prev = cur;
      }
      cur = cur->next_;
  }
  // put in front of first node
  if (min != *head) {
      prev->next_ = min->next_;
      min->next_ = *head;
      *head = min;
  }
      sortList(&((*head)->next_));
      return;
}

// void sortList(Node **head) {

  // your code here!

  /*
  Selection sort:
  Repeatedly moving the minimum node
  to the beginning
  */


  // Some variables you probably will need
  // Node *minNode = (*head);
  // Node *minPrev = NULL;
  // // int minData = (*head)->data_;
  // Node *tmp = (*head);
  // // Node *prev = NULL;
  //
  // //empty List
  // if ((*head) == NULL || (*head)->next_==NULL){
  //     return;
  // }//modified here
  //
  // // if(*head == NULL || (*head) -> next_ == NULL){
  // //     return;
  // // }
  //
  // while ( tmp -> next_!= NULL ) {
  //     // TODO: Find the minimum node
  //     if(tmp->data_ > tmp->next_->data_){
  //         minNode = tmp->next_;
  //         minPrev = tmp;
  //     }
  //     tmp = tmp -> next_;
  //     //会把改变的内容写下来 不改变的话就沿袭就好了 不用描述
  //     // minNode = tmp;
  //     // if(tmp -> data_ <= tmp->next_->data_){
  //     //     tmp = tmp->next_;
  //     // }
  //     // while(tmp->next_ != NULL){
  //     //     minNode = tmp -> next_;
  //     //     minPrev = tmp;
  //     //
  //     //     tmp = minNode;
  //     //     if(minNode -> data_ < tmp ->next_ -> data_){
  //     //         tmp = tmp->next_;
  //     //     }
  //     //     minNode = tmp->next_;
  //     //     minPrev = tmp;
  //     // }
  // }
  // minData = minNode -> data_;
//   if (minNode!=*head) {
//       // TODO: Move the minimum node to the beginning
//       // and update head
//       minNode->next_ = *head;
//       minPrev->next_ = minNode->next_;//modified here
//       *head = minNode;
//   }
//
//   // Recurse on the rest of the list
//   sortList(& (*head)->next_);
//   return;
// }

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
