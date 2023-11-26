class Solution {
    public int[] runningSum(int[] nums) {
        int[] sum = new int [nums.length];

        if(nums.length == 0)
            return sum;
        sum[0] = nums[0];

        for(int index = 1; index < nums.length; index++){
            sum[index] = sum[index-1] + nums[index];
        }
        
        return sum;
    }
}
