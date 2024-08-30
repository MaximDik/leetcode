#include <iostream>
#include <cctype>

class Solution{
    private:
        bool checkSymbol(char ch){
            return (('a' <= std::tolower(ch) && std::tolower(ch) <= 'z') || ('0' <= ch && ch <= '9'));
        }
    public:
        bool isPalindrome(const std::string& s){
            int left = 0, right = s.size() - 1;

            while(left < right){
                while(left < right && !checkSymbol(s[left])){
                    left++;
                }
                while(left < right && !checkSymbol(s[right])){
                    right--;
                }
                if(std::tolower(s[left]) == std::tolower(s[right])){
                    left++;
                    right--;
                } else {
                    return false;
                }
            }
            return true;
        }
};

int main(){
    Solution s;
    std::cout << s.isPalindrome("hello") << '\n';
}