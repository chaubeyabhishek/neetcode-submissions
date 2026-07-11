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
    int goodNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int count = 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
        while(!q.empty()){
            
            TreeNode* node = q.front().first;
            int maxVal = q.front().second;
            q.pop();
            if(node->val >= maxVal){
                count++;
            }
            int newmax = max(maxVal,node->val);
            if(node->left){
                q.push({node->left,newmax});
            }
            if(node->right){
                q.push({node->right,newmax});
            }
            
        }
        return count;
    }
};
