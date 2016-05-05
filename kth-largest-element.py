# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-05 13:32:43
#  Example
# In array [9,3,2,4,8], the 3rd largest element is 4.
# In array [1,2,3,4,5], the 1st largest element is 5, 2nd largest element is 4,
# 3rd largest element is 3 and etc.

class Solutin:
    # @param k & A a integer and an array
    # @return ans a integer
    def kthLargestElement(self, k, A):
        A = sorted(A, reverse=True)
        return A[k-1]
