// leet code 392
class Solution {
    public int maxRotateFunction(int[] nums) {
        int N = nums.length, sum = 0;
        long fnval = 0;
        for(int i=0; i<N; i++){
            sum += nums[i];
            fnval += (i*nums[i]);
        }
        long ans = fnval;
        for(int lt = N-1; lt>=0; lt--){
            fnval = fnval - (nums[lt]*(N-1)) + (sum-nums[lt]);
            ans = Math.max(ans, fnval); 
        }
        return (int)(ans);
    }
}