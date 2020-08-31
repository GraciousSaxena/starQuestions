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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)   return root;
        if(root->val < key){
            root->right = deleteNode(root->right, key);
        } else if(root->val > key){
            root->left = deleteNode(root->left, key);
        } else {
            if(root->left == NULL && root->right == NULL)
                root = NULL;
            else if(root->right == NULL){
                TreeNode* left = root->left;
                while(left->right != NULL){
                    left = left->right;
                }
                root->val = left->val;
                root->left = deleteNode(root->left, root->val);
            } else {
                TreeNode* right = root->right;
                while(right->left){
                    right = right->left;
                }
                root->val = right->val;
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;        
    }
};
