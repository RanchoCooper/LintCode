/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-08 20:54:11
 * 对于一个给定的 source 字符串和一个 target 字符串
 * 你应该在 source 字符串中找出 target 字符串出现的第一个位置(从0开始)
 * 如果不存在，则返回 -1
 */

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if (source == nullptr || target == nullptr) return -1;
        int source_size = strlen(source);
        int target_size = strlen(target);
        int i, j;
        for (i = 0; i < source_size - target_size + 1; i++) {
            for (j = 0; j < target_size; j++) {
                if (source[i + j] != target[j]) {
                    break;
                }
            }
            if (j == target_size) {
                return i;
            }
        }
        return -1;
    }
};
