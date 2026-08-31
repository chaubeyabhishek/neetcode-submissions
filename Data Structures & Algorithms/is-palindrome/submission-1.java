class Solution {
    public boolean isPalindrome(String s) {
        String temp = "";
        for(char ch:s.toCharArray()){
            if(Character.isLetterOrDigit(ch)){
                temp += Character.toLowerCase(ch);
            }
        }
        char [] tem = temp.toCharArray();
        int l = 0;
        int r = tem.length-1;
        while(l < r){
            if(tem[l]!=tem[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
