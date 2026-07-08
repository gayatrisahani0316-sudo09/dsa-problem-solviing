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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* Current = nullptr;

        while(!q.empty()){
            Current = q.front();
            q.pop();

            if (Current -> right != nullptr){
                q.push(Current -> right);
            }

            if (Current -> left != nullptr){
                q.push(Current -> left);
            }
        }
        return Current -> val;
    }
};