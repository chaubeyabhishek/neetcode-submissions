class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(heights[i] * (n-1-i) <= ans){
                continue;
            }
            for(int j=i+1;j<n;j++){
                int w = j - i;
                int l = min(heights[i],heights[j]);
                int area = w * l;
                ans = max(ans , area);
            }
        }
        return ans;
    }
};
