class Solution {
public:
    int lengthOfLastWord(string s) {

        string substring;
        string lastSubstring;
        
        for(int i = 0; i < s.size()+1; i++) {
            if(s[i] != ' ' && s[i] != '\0')
                substring += s[i];
            else {
                if(substring != "") {
                    lastSubstring = substring;
                }
                substring = "";
            }
        }
        
        return lastSubstring.size();
    }
};