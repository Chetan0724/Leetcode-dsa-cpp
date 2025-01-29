/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int Depth(TreeNode *root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int leftDepth = Depth(root->left);
        int rightDepth = Depth(root->right);

        int ans = max(leftDepth, rightDepth) + 1;

        return ans;

    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        bool AnsOne = isBalanced(root->left);
        bool AnsTwo = isBalanced(root->right);

        if (AnsOne == true && AnsTwo == true) {
            int leftDepth = Depth(root->left);
            int rightDepth = Depth(root->right);

            if (abs(leftDepth - rightDepth) <= 1) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};