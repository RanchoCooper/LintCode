/*
 * @author  : Rancho Cooper
 * @date    : 2016-07-18 17:11
 * @email   : rancho941110@gmail.com
 */
#pragma once

class Solution {
public:
    /**
     * param n: As description.
     * return: A list of strings.
     */
    vector<string> fizzBuzz(int n ) {
        for (int i = 1; i <= n; ++i) {
            if (i % 15 == 0)
                results.push_back("fuzz buzz");
            else if (i % 5 == 0)
                results.push_back("buzz");
            else if (i % 3 ==0)
                results.push_back("fuzz");
            else
                results.push_back(to_string(i));
        }
        return results;
    }
};
