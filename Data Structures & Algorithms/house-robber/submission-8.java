class Solution {
    public int amount(int [] nums , int idx){
        if(idx >= nums.length){
            return 0;
        }
        int take = nums[idx] + amount(nums , idx+2);
        int skip = amount(nums , idx+1);
        return Math.max(take , skip);
    }
    public int rob(int[] nums) {
        return amount(nums , 0);

    }
}
