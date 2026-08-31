class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        s1 = list(s1)
        s1.sort()
        k = len(s1)
        for i in range(len(s2)-k+1):
            temp = list(s2[i:i+k])
            temp.sort()
            if temp == s1:
                return True

        return False

        