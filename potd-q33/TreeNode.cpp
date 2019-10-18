#include "TreeNode.h"
#include <algorithm>


void rightRotate(TreeNode* root) {

    // Your code here
    TreeNode * t2;
    t2 = root -> left_;
    TreeNode * t2Right = t2 -> right_;
    root -> left_ = t2Right;
    t2 -> right_ = root;
    //modified here
    //parent_
    //now the t2 become root, connect it with parent_
    t2 -> parent_ = root -> parent_;
    if(root -> parent_ != NULL){
        if(root -> parent_ -> left_ == root){
            root-> parent_-> left_ = t2;
        } else {
            root -> parent_ -> right_ = t2;
        }
    }
    //now the parent of root is t2, connect them
    root -> parent_ = t2;
    root -> left_ = t2Right;
    if(t2Right != NULL){
        t2Right -> parent_ = root;
    }

}


void leftRotate(TreeNode* root) {

    // your code here
    TreeNode * t2;
    t2 = root -> right_;
    TreeNode * t2Left = t2 -> left_;
    root->right_ = t2Left;
    t2 -> left_ = root;
    //modified here
    //parent_
    //now the t2 become root, connect it with parent_
    t2 -> parent_ = root -> parent_;
    if(root -> parent_ != NULL){
        if(root -> parent_ -> right_ == root){
            root-> parent_-> right_ = t2;
        } else {
            root -> parent_ -> left_ = t2;
        }
    }
    //now the parent of root is t2, connect them
    root -> parent_ = t2;
    root -> right_ = t2Left;
    if(t2Left != NULL){
        t2Left -> parent_ = root;
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
