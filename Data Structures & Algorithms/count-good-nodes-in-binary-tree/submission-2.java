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
    public int goodNodes(TreeNode root) {
        if(root == null){
            return 0;
        }
        int count = 0;
        Queue<TreeNode>q = new LinkedList<>();
        Queue<Integer>maxq = new LinkedList<>();
        q.add(root);
        maxq.add(root.val);
        while(!q.isEmpty()){
            TreeNode node = q.poll();
            int maxint = maxq.poll();

            if(node.val >= maxint){
                count++;
            }

            int newmax = Math.max(maxint , node.val);

            if(node.left != null){
                q.add(node.left);
                maxq.add(newmax);
            }
            if(node.right != null){
                q.add(node.right);
                maxq.add(newmax);
            }
        }
        return count;
    }
}
