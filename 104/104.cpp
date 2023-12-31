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
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }

        int ans = recursion(root);

        return ans;    
    }

    int recursion(TreeNode* node)
    {
        //base case
        if(node==nullptr)
        {
            return 0;
        }

        int left = recursion(node->left);
        int right = recursion(node->right);

        return max(left,right)+1;
    }
};