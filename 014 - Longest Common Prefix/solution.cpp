// desafios 014 - https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for(int i = 0; i < strs[0].size(); i++) { 
            char c = strs[0][i];
            for(string str : strs) {
                if(str[i] != c)
                    return prefix;
            }
            prefix += c;
        }
        return prefix;
    }
};