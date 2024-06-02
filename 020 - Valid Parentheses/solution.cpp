// desafio 020 - https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> opens; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                opens.push(c); 
            } else {
                if (opens.empty() || (c == ')' && opens.top() != '(') || (c == '}' && opens.top() != '{') ||(c == ']' && opens.top() != '[')) {
                    return false;
                }
                opens.pop(); 
            }
        }
        return opens.empty(); 
    }
};