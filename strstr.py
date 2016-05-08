# !/usr/bin/env python
# -*- coding: utf-8 -*-
# @author: Rancho (rancho941110@gmail.com)
# @date  : 2016-05-08 21:10:36
# 对于一个给定的 source 字符串和一个 target 字符串
# 你应该在 source 字符串中找出 target 字符串出现的第一个位置(从0开始)
# 如果不存在，则返回 -1

class Solution:
    def strStr(self, source, target):
        if source is None or target is None:
            return -1
        return source.find(target)
