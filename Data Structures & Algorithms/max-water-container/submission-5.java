class Solution {
    public int maxArea(int[] heights) {
        int n = heights.length;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(heights[i]*(n-i-1) <= ans){
                continue;
            }
            for(int j=i+1;j<n;j++){
                int w = j - i;
                int l = Math.min(heights[i] , heights[j]);
                int area = w * l;
                ans = Math.max(ans , area);
            }
        }
        return ans;
    }
}
