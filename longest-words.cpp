/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-08 21:09:41
 * Given a dictionary, find all of the longest words in the dictionary.
 */

class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        int maxlen = 0;
        vector<string> ans;
        for (int i = 0; i < dictionary.size(); ++i)
            if (maxlen < dictionary[i].size()) maxlen = dictionary[i].size();
        for (int i = 0; i < dictionary.size(); ++i)
            if (maxlen == dictionary[i].size()) ans.push_back(dictionary[i]);
        return ans;
    }
};
