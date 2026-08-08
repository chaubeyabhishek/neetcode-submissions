class Solution {
public:
    int rob(vector<int>& nums) {
        int sum = 0;
        if(nums.size() == 2){
            return max(nums[0],nums[1]);
        }
        if(nums.size() == 3){
            return max(nums[0],nums[1],nums[2]);
        }
        for(int i=0;i<nums.size();i+=2){
            sum = sum + nums[i];
        }
        return sum;
    }
};
