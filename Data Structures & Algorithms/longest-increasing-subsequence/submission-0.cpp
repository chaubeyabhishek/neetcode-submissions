class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>tail;
        int size = 0;
        for(int num:nums){
            int left = 0;
            int right = tail.size();
            while(left < right){
                int mid = left + (right - left)/2;
                if(tail[mid] < num){
                    left = mid + 1;
                }
                else{
                    right = mid;
                }
            }
            
            if(left == tail.size()){
                tail.push_back(num);
            }
            else{
                tail[left] = num;
            }
        }
        return tail.size();
    }
};
