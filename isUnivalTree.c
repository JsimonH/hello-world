/*如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
只有给定的树是单值二叉树时，才返回 true；否则返回 false。*/

bool isUnivalTree(struct TreeNode* root){
     if(root == NULL)
        return true;

    if(root->left && root->left->val != root->val)
        return false;

    if(root->right && root->right->val != root->val)
        return false;

    // root root->left root->right 都是相等的
    // 递归左子树 递归右子树
    return  isUnivalTree(root->left) && isUnivalTree(root->right);
}
