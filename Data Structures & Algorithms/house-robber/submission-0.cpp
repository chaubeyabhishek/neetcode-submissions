class Solution {
public:
    int rob(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i+=2){
            sum = sum + nums[i];
        }
        return sum;
    }
};
