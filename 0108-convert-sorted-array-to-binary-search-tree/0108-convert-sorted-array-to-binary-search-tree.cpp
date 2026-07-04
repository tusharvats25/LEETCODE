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

    TreeNode* solve(vector<int>& nums, int start, int end) {

        // Base case
        // If there are no elements left in this range
        if (end <= start) {
            return NULL;
        }

        // Find the middle element
        int mid = (start + end) / 2;

        // Create a new node using the middle element
        TreeNode* root = new TreeNode(nums[mid]);

        // Build the left subtree
        root->left = solve(nums, start, mid);

        // Build the right subtree
        root->right = solve(nums, mid + 1, end);

        // Return the root of this subtree
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        // Build BST from the entire array
        return solve(nums, 0, nums.size());
    }
};