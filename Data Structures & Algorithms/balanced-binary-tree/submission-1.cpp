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
    bool balanced = true;
    bool isBalanced(TreeNode* root) {
        depth(root);
        return balanced;

    }
private:
    int depth(TreeNode* node){
        if(node == nullptr) return 0;

        int left = depth(node->left);
        int right = depth(node->right);

        if(abs(left - right) > 1){
            balanced = false;
        }

        if(left > right){
            return left + 1;
        }else{
            return right + 1;
        }
    }
};
