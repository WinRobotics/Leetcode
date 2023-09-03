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
    int minDepth(TreeNode* root) {
        
        if(root == nullptr)
        {
            return 0;
        }
        if(root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }    
        int min = recursion(root);
        
        return min;
    }
    
    int recursion(TreeNode* root)
    {
        //base case
        if(root == nullptr)
        {
            return 0;
        }

        
        int left = recursion(root->left);
        int right = recursion(root->right);
        
        if((left ==0 && right >0) || (right ==0 && left >0) )
        {
            return max(left,right)+1;
        }
        
        return min(left,right)+1;
    }
    
};