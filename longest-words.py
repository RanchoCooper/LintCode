# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-08 21:46:42
# Given a dictionary, find all of the longest words in the dictionary.

class Solution:
    # @param dictionary: a list of strings
    # @return: a list of strings
    def longestWords(self, dictionary):
        maxLength = max(len(w) for w in dictionary)
        return [w for w in dictionary if len(w) == maxLength]
