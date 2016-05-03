/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-08 22:31:44
 * Given a list of non negative integers, arrange them such that they form the largest number.
 * Example
 * Given [1, 20, 23, 4, 8], the largest formed number is 8423201.
 */

#include <sstream>

bool cmp(const string s1, const string s2) {
    return (s1 + s2) > (s2 + s1);
}

class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */
    string largestNumber(vector<int> &num) {
        // write your code here
        vector<string> string_num(num.size());
        stringstream stream;
        for (int i = 0; i < num.size(); ++i) {
            stream << num[i];
            stream >> string_num[i];
            stream.clear();  // set error status flags
        }  // convert number to string

        sort(string_num.begin(), string_num.end(), cmp);
        string tmp_res;
        for (int i = 0; i < string_num.size(); ++i)
            tmp_res += string_num[i];
        // at this point, we may got result: 000 from '0', '0', '0'
        // so we set a flag to detect
        string res;
        bool flag = false;
        for (int i = 0; i < tmp_res.size(); ++i) {
            if (tmp_res[i] != '0') {
                res.push_back(tmp_res[i]);
                flag = true;
            } else if (flag) {
                res.push_back(tmp_res[i]);
            }
        }
        if (!flag)
            res.push_back('0');
        return res;
    }
};

