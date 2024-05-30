// desafio 009: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string palavra = to_string(x);
        string invPalavra = "";

        for(int i = palavra.size()-1; i >= 0; i--) {
            invPalavra.push_back(palavra[i]);
        }

        if(palavra == invPalavra) {
            return true;
        } else {
            return false;
        }
    }
};