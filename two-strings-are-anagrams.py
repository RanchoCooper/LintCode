# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-08 20:48:33
#

class Solution:
    """
    @param s: The first string
    @param b: The second string
    @return true or false
    """
    def anagram(self, s, t):
        # write your code here
        ss = [ i for i in s]
        tt = [ i for i in t]
        ss.sort()
        tt.sort()
        return "".join(ss) == "".join(tt)
