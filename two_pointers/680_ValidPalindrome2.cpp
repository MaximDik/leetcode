#include <iostream>

class Solution{

    bool isPalindrome(const std::string str, int l, int r){
        while(l < r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    public:
        bool validPalindrome(const std::string s){
            int l = 0, r = s.size() - 1;

            while(l < r){
                if(s[l] != s[r]){
                    return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
                }
                l++;
                r--;
            }
            return true;
        }
};
