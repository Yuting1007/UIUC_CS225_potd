#include "TreeNode.h"
#include <algorithm>
#include <queue>

using namespace std;

TreeNode* findLastUnbalanced(TreeNode* root) {
  // your code here
  //needeed variables
  TreeNode* output = NULL;
  TreeNode* curr;
  int currBalance;
  // curr -> balance_ = currBalance;
  queue<TreeNode*> q;

  q.push(root);

  while(!q.empty()){
      //base case
      //besides NULL, only root
      curr = q.front();
      q.pop();
      currBalance = getBalanced(curr);
      curr -> balance_ = currBalance;
      if(currBalance >= 2 || currBalance <= -2){
          output = curr;
      }
      //recursively
      if(curr->left_ != NULL){
          q.push(curr->left_);
      }
      if(curr->right_ != NULL){
          q.push(curr->right_);
      }
  }
  return output;
}

int getHeight(TreeNode* root){
    if(root == NULL){
        return -1;
    }
    return 1 + max(getHeight(root->left_),getHeight(root->right_));
}

int getBalanced(TreeNode* root){
    int balance = getHeight(root->left_) - getHeight(root->right_);
    return balance;
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
