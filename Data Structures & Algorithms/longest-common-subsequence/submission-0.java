class Solution {
    public int LCS(String text1 , String text2 , int i , int j){
        if(i == text1.length() || j == text2.length()){
            return 0;
        }
        int ans = 0;
        if(text1.charAt(i) == text2.charAt(j)){
            ans = 1 + LCS(text1 , text2 , i+1 , j+1);
        }
        else{
            ans = Math.max(LCS(text1,text2,i+1,j) , LCS(text1,text2,i,j+1));
        }
        return ans;
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int ans = LCS(text1 , text2 , 0 ,0);
        return ans;
    }
}
