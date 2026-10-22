#include<cctype>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {

    auto end_non_alpha = std::remove_if(s.begin(), s.end(), [](auto c)         
                                                       {return  !isalnum(c); });
        s.erase(end_non_alpha, s.end()); 
        auto str_len = s.size();
        for(auto i = 0; i < s.size()/2; i++){
          
            if(tolower(s[i]) != tolower(s[str_len -1 - i])){return false;}
            
        }
        return true;
    }
};