#include "TreeNode.h"

#include <cstddef>
#include <iostream>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int TreeNode::getHeight() {
  //set two int as the height, initialize them as 0
  int left, right;
  left=0;
  right=0;

  //base case, a empty Tree
  if(left_==NULL && right_==NULL){
      return -1;
  }
  // recursively, cannot use iterator since for each subroot, it has two direction
  if(left_!=NULL){
      left = left_->getHeight();
  }
  if(right_!=NULL){
      right = right_->getHeight();
  }
  if(left>right){
      return left+1;
  }
  return right+1;

}
