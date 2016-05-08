/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-08 21:52:47
 * Given an array of integers, find a contiguous subarray which has the largest sum.
 */

 class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        int sum = 0, minSum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            maxSum = max(maxSum, sum - minSum);
            minSum = min(minSum, sum);
        }
        return maxSum;
    }
};


