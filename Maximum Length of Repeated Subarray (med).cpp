//leet code 718
class Solution {
    public int fn(int R, int C, int[] nums1, int[] nums2, int[][] dp){
        int max = 0;
        for(int row=1; row<=R; row++){
            for(int col=1; col<=C; col++){
                if(nums1[row-1] == nums2[col-1]){
                    dp[row][col] = 1+dp[row-1][col-1];
                    max = Math.max(max, dp[row][col]);
                }
            }
        }
        return max;
    }
    public int findLength(int[] nums1, int[] nums2) {
        int R = nums1.length;
        int C = nums2.length;
        int dp[][] = new int[R+1][C+1];
        return fn(R, C, nums1, nums2, dp);
    }
}