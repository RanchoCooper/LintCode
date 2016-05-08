/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-08 20:41:43
 * test two string whether only has different alpha order
 * such as: "abcd", "dcab"
 */
class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        sort(s.begin(), s.end());
        sort(t.begin(), s.end());
        return s == t;
    }
};
