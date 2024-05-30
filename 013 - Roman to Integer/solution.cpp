// desafio 013 - https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        char* ptr_s = &s[s.size()-1];
        int resultNumber = 0;

        while(ptr_s >= &s[0]) {
            switch(*ptr_s) {
                case 'I':
                    if(*ptr_s == *(ptr_s+1) || *(ptr_s+1) == 0)
                        resultNumber += 1;
                    else 
                        resultNumber -= 1;
                    break;
                case 'V':
                    resultNumber += 5;
                    break;
                case 'X':
                    if(*ptr_s == *(ptr_s+1) || *(ptr_s+1) == 0 || *(ptr_s+1) == 'I' || *(ptr_s+1) == 'V')
                        resultNumber += 10;
                    else 
                        resultNumber -= 10;
                    break;
                case 'L':
                    resultNumber += 50;
                    break;
                case 'C':
                    if(*ptr_s == *(ptr_s+1) || *(ptr_s+1) == 0 || *(ptr_s+1) == 'I' || *(ptr_s+1) == 'V' || *(ptr_s+1) == 'X' || *(ptr_s+1) == 'L')
                        resultNumber += 100;
                    else 
                        resultNumber -= 100;
                    break;
                case 'D':
                    resultNumber += 500;
                    break;
                case 'M':
                    if(*ptr_s == *(ptr_s+1) || *(ptr_s+1) == 0 || *(ptr_s+1) == 'I' || *(ptr_s+1) == 'V' || *(ptr_s+1) == 'X' || *(ptr_s+1) == 'L' || *(ptr_s+1) == 'C' || *(ptr_s+1) == 'D')
                        resultNumber += 1000;
                    else 
                        resultNumber -= 1000;
                    break;
            }
            ptr_s--;
        }

        return resultNumber;
    }
};