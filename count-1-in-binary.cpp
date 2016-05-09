/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-09 23:22:06
 *
 * Brief:
 * Count how many 1 in binary representation of a 32-bit integer.
 * Example:
 * Given 32, return 1
 * Given 5, return 2
 * Given 1023, return 9
 * Detail:
 */
class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    int countOnes(int num) {
        int total = 0;
        for (int i = 0; i < 32; ++i) {
            total += num & 1;
            num >>= 1;
        }
        return total;
    }
};

/*
 * Reflection:
 *
 */
