# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-05 13:32:43
#  Example
# In array [9,3,2,4,8], the 3rd largest element is 4.
# In array [1,2,3,4,5], the 1st largest element is 5, 2nd largest element is 4,
# 3rd largest element is 3 and etc.

class Solution:
    # @param k & A a integer and an array
    # @return ans a integer
    def partition(self, A, left, right):
        pivot = A[left]
        l = left + 1
        r = right
        while l <= r:
            if A[l] < pivot and pivot > A[r]:
                A[l], A[r] = A[r], A[l]
            if pivot <= A[l]:
                l += 1
            if pivot >= A[r]:
                r -= 1
        A[left], A[r] = A[r], A[left]
        return r
    def kthLargestElement(self, k, A):
        # A = sorted(A, reverse=True)
        left, right = 0, len(A) - 1
        while True:
            pos = self.partition(A, left, right)
            if pos == k -1:
                return A[pos]
            elif pos < k -1:
                left = pos + 1
            else:
                right = pos - 1
