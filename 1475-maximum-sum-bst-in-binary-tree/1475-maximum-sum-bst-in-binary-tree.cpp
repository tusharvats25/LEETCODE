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
 //O(N)
class Solution {
public:
    struct Tree {
        int max,min,sum;
        bool isBST;
    };
    Tree traverse(TreeNode* node, int &maxsum) {
        if(!node) 
        return {INT_MIN,INT_MAX,0,true};
        auto left = traverse(node->left, maxsum);
        auto right = traverse(node->right, maxsum);
        Tree current={
            max(node->val,right.max),
            min(node->val,left.min),
            left.sum+right.sum+node->val,
            left.isBST&&right.isBST&&(node->val>left.max&&node->val<right.min)
        };
        if(current.isBST) 
        maxsum=max(maxsum,current.sum);
        return current;
    }
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
        traverse(root,maxsum);
        return maxsum;
    }
};