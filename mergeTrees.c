/*Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees 
are overlapped while the others are not. You need to merge them into a new binary tree. The merge rule is that if 
two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be 
used as the node of new tree.

Input: 
	Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  

Output: 
Merged tree:
	     3
	    / \
	   4   5
	  / \   \ 
	 5   4   7
*/

struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    if(t1 == NULL && t2 == NULL)
        return NULL;
    
    if(t1 == NULL && t2 != NULL)
        return t2;

    if(t2 == NULL && t1 != NULL)
        return t1;
    
    // t1, t2都不为空
    t1->val = t1->val + t2->val;
    
    t1->left=mergeTrees(t1->left,t2->left);
    t1->right=mergeTrees(t1->right,t2->right);
    return t1;
}
