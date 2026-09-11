// leet code 1143
class Solution {
    public int fn(String text1, String text2, int R, int C, int dp[][]){
        int max = 0;
        for(int row = 1; row <= R; row++){
            for(int col = 1; col <= C; col++){
                if(text1.charAt(row-1) == text2.charAt(col-1)){
                    dp[row][col] = 1+dp[row-1][col-1];
                    max = Math.max(max, dp[row][col]);
                }else{
                    dp[row][col] = Math.max(dp[row-1][col], dp[row][col-1]);
                }
            }
        }
        return max;
    }
    public int longestCommonSubsequence(String text1, String text2) {
       int R = text1.length();
       int C = text2.length();
       int dp[][] = new int[R+1][C+1];
       return fn(text1, text2, R, C, dp); 
    }
}