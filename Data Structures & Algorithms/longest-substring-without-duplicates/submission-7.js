class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let mp = new Map();
        let ans = 0;
        let left = 0;
        for(let right=0;right<s.length;right++){
            if(mp.has(s[right])){
                left = Math.max(left , mp.get(s[right]) + 1);
            }
            mp.set(s[right],right);
            ans = Math.max(ans , right-left+1);
        }
        return ans;
    }
}
