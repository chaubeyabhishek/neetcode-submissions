class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        mp = {}
        left = 0
        ans = 0
        maxfreq = 0
        for right in range(len(s)):
            ch = s[right]
            if ch in mp:
                mp[ch] += 1
            else:
                mp[ch] = 1

            maxfreq = max(maxfreq , mp[ch])

            if (right-left+1) - maxfreq > k:
                mp[s[left]] -= 1
                left = left + 1

            ans = max(ans , right-left+1)

        return ans;
