class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = prices[0]
        maxPrice = 0
        for i in range(len(prices)):
            minPrice = min(minPrice , prices[i]);
            profit = prices[i] - minPrice
            maxPrice = max(maxPrice , profit)
        
        return maxPrice