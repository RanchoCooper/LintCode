# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-08 22:00:18
# Given an array of integers, find a contiguous subarray which has the largest sum.


class Solution:
    """
    @param nums: A list of integers
    @return: An integer denote the sum of maximum subarray
    """
    def maxSubArray(self, nums):
        # write your code here
        if nums is None or len(nums) == 0:
            return 0
        sum = 0
        minSum = 0
        maxSum = nums[0]
        for n in nums:
            sum += n
            if maxSum < sum - minSum:
                maxSum = sum - minSum
            if sum < minSum:
                minSum = sum
        return maxSum
