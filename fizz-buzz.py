#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @author   : Rancho Cooper
# @date     : 2016-07-18 17:24
# @email    : rancho941110@gmail.com

class Solution:
    """
    @param n: An integer as description
    @return: A list of strings.
    For example, if n = 7, your code should return
        ["1", "2", "fizz", "4", "buzz", "fizz", "7"]
    """
    def fizzBuzz(self, n):
        results = []
        for i in range(1, n):
            if not i % 15:
                results.append("fuzz buzz")
            elif not i % 5:
                results.append("buzz")
            elif not i % 3:
                results.append("fuzz")
            else:
                results.append(str(i))
        return results
