class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int need = target - first;
            if(mp.find(need)!=mp.end()){
                ans.push_back(mp[need]);
                ans.push_back(i);
            }
            mp[first] = i;
        }
        return ans;
      
    }
};
