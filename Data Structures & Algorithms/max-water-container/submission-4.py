class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        ans = 0
        for i  in range(n):
            if heights[i] * (n-1-i) <= ans:
                continue
            for j in range(i+1,n):

                w = j - i;
                l = min(heights[i],heights[j]);

                area = w * l
                ans = max(ans , area)
    
        return ans
