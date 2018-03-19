/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        //递归一定要注意返回值
        if(!root) return NULL;  //递归出口
        if(root->val< L) return trimBST(root->right, L, R);
        if(root->val> R) return trimBST(root->left, L, R);            
        root->right = trimBST(root->right, L, R);
        root->left = trimBST(root->left, L, R);
        return root;
    }
    
}; 
/*需要说明的是：
递归的理解不建议用画图理解，而是写出递归方程，明确2个点：
1. 当前层需要做什么
2. 层的转移方程（递归出口）
先看有没有，再看对不对
*/