class Solution {
    public boolean solve(int i , int[]nums , int target , int[][]dp){
        if(target == 0){
            return true;
        }
        if(i == nums.length){
            return false;
        }
        if(dp[i][target] != -1){
            return dp[i][target] == 1;
        }
        boolean skip = solve(i+1 , nums , target , dp);
        boolean pic = false;
        if(nums[i] <= target){
            pic = solve(i+1 , nums , target-nums[i] , dp);
        }
        boolean ans = skip || pic;
        dp[i][target] = ans ? 1:0;
        return ans;
    }
    public boolean canPartition(int[] nums) {
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum = sum + nums[i];
        }
        if(sum % 2 != 0){
            return false;
        }

        int target = sum / 2;

        int [][] dp = new int[nums.length][target+1];
        for(int i=0;i<dp.length;i++){
            Arrays.fill(dp[i],-1);
        }
        return solve(0 , nums , target , dp);

    }
}
