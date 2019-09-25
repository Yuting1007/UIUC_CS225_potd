#include "potd.h"
#include <iostream>

void insertSorted(Node **head, Node *insert) {
  // your code here!
  Node *curr = *head;
  //Empty
  if(*head == NULL){
      *head = insert;
      return;
  }//modified here
  //front
  if(curr->data_ > insert->data_){
      insert->next_ = curr;
      *head = insert;
      return;
  }
  //middle
  while(curr->next_ != NULL){
      if(curr->next_->data_ > insert->data_){
          insert->next_ = curr->next_;
          curr->next_ = insert;
          // curr = insert;
          return;
      }
      curr = curr->next_;//modified here, change curr out of the if bound
  }
  //back
  curr->next_ = insert;
  return;
}
