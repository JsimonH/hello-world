/*Balanced Binary Tree

Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as:
A binary tree in which the left and right subtrees of every node differ in height by no more than 1.

Given the following tree [3,9,20,null,null,15,7]:
    3
   / \
  9  20
    /  \
   15   7
Return true.

Given the following tree [1,2,2,3,3,null,null,4,4]:

       1
      / \
     2   2
    / \
   3   3
  / \
 4   4
Return false.
*/

int Depth(struct TreeNode* root)
{
    if(root == NULL)  return 0;
    int leftDepth = Depth(root->left);
    int rightDepth = Depth(root->right);
    return leftDepth > rightDepth ? leftDepth+1 : rightDepth+1;
}

bool isBalanced(struct TreeNode* root){
    if(root == NULL) return true;
    int leftDepth = Depth(root->left);
    int rightDepth = Depth(root->right);
    
    return abs(leftDepth-rightDepth) <2 
    && isBalanced(root->left) 
    &&isBalanced(root->right);
}
