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
private:
    int calculateNumber(TreeNode* node,int currentNumber) {
        if (node == nullptr) {
            return 0;
        }

        currentNumber = currentNumber * 10 + node->val;

        if (node->left == nullptr && node->right == nullptr) {
            return currentNumber;
        }

        int leftSum = calculateNumber(node->left, currentNumber);
        int rightSum = calculateNumber(node->right, currentNumber);

        return leftSum + rightSum;
    }    
public:
    int sumNumbers(TreeNode* root) {
        return calculateNumber(root, 0); 
    }    
};