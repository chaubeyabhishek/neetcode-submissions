/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    public int solve(TreeNode root , boolean []ans){
        if(root == null){
            return 0;
        }

        int left = solve(root.left , ans);
        int right = solve(root.right , ans);
        
        if(Math.abs(left-right) > 1){
            ans[0] = false;
        }
        
        return 1 + Math.max(left , right);
    }
    public boolean isBalanced(TreeNode root) {
        boolean [] ans = {true};
        solve(root , ans);
        return ans[0];
    }
}
