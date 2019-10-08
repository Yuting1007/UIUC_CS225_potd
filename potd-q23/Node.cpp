#include "Node.h"
#include<vector>

using namespace std;

Node *listSymmetricDifference(Node *first, Node *second) {
  // your code here
  Node* temp1, *temp2,*result;
  std::vector<Node*> nodeArray;
  temp1 = first;
  temp2 = second;
  bool inArray, find_same;

  while(temp1!=NULL){
      find_same = false;
      for(temp2 = second; temp2!=NULL; temp2=temp2->next_){
          if(temp2->data_ == temp1->data_){
              find_same = true;
          }
      }//temp2 vs first

      //if there is no common elements in temp2
      if(find_same==false){
          inArray = false;
          for(unsigned long i = 0; i<nodeArray.size();i++){
              if(nodeArray[i]->data_ == temp1->data_){
                  inArray = true;
              }
          }
          if(inArray == false){
              Node* temp = new Node(*temp1);
              nodeArray.push_back(temp);
          }
      }//push temp1 into nodeArray
      temp1 = temp1->next_;
  }//now the nodeArray only contain list1-special elements (only appear once)

  //do it again for second array
  temp1 = first;
  temp2 = second;

  while(temp2!=NULL){
      find_same = false;
      for(temp1 = first; temp1!=NULL; temp1 = temp1->next_){
          if(temp1->data_ == temp2->data_){
              find_same = true;
          }
      }

      if(find_same = false){
          inArray = false;
          for(unsigned long i = 0; i<nodeArray.size();i++){
              if(nodeArray[i]->data_ == temp2->data_){
                  inArray = true;
              }
          }
          if(inArray == false){
              Node* temp = new Node(*temp1);
              nodeArray.push_back(temp);
          }
      }
      temp2 = temp2->next_;
  }
  //find_same=flase,different with another list
  //inArray=false,only appear once

  if(nodeArray.size()==0){
      return NULL;
  }else{
      result = nodeArray[0];
      for(unsigned long i = 0; i<nodeArray.size();i++){
          nodeArray[i]->next_ = nodeArray[i+1];//linked list
      }
      nodeArray[nodeArray.size()-1]->next_ = NULL;
  }
  return result;
}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
