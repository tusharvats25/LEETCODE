/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=0;
    int dfs(TreeNode* root)
    {
        if(root==NULL) return 0;
        int leftchild=dfs(root->left);
        int rightchild=dfs(root->right);
        if(leftchild==1 || rightchild==1) 
        {
            c++;
            return -1;
        }
        if(leftchild==-1 || rightchild==-1)
        return 0;
        else return 1;
    }
    int minCameraCover(TreeNode* root) {
        if(dfs(root)==1)
        c++;
        return c;
    }
};