// leet code 583
class Solution {
    public int fn(String word1, String word2, int R, int C, int dp[][]){
        int max = 0;
        for(int row = 1; row <= R; row++){
            for(int col = 1; col <= C; col++){
                if(word1.charAt(row-1) == word2.charAt(col-1)){
                    dp[row][col] = 1+dp[row-1][col-1];
                    max = Math.max(max, dp[row][col]);
                }else{
                    dp[row][col] = Math.max(dp[row-1][col], dp[row][col-1]);
                }
            }
        }
        return (word1.length()-max)+(word2.length()-max);
    }
    public int minDistance(String word1, String word2) {
        int R = word1.length();
        int C = word2.length();
        int dp[][] = new int[R+1][C+1];
        return fn(word1, word2, R, C, dp); 
    }
}