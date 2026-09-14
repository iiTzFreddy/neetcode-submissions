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
    int diameter = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return diameter;
    }

private:
    int depth(TreeNode* node){
        if(node == nullptr) return 0;

        int left = depth(node->left);
        int right = depth(node->right);
        
        if(left + right > diameter){
            diameter = left + right;
        }

        if(left > right){
            return 1 + left;
        }else{
            return 1 + right;
        }
    }
};
