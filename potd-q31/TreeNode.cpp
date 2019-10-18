#include "TreeNode.h"
#include <algorithm>
using namespace std;

bool isHeightBalanced(TreeNode* root) {
  // your code here
  //if balance = -1,1,0
  int balance = getHeight(root->left_)-getHeight(root->right_);
  if(balance <= 1 && balance >= -1){
      return true;
  }
  return false;
}

//helper function
int getHeight(TreeNode* root){
    if(root == NULL){
        return -1;
    }
    else{
        return 1 + max(getHeight(root->left_),getHeight(root->right_));
    }
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
