#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int>map_s;
        std::unordered_map<char, int>map_t;
        for(auto c: s){
            if(map_s.contains(c)){++map_s[c];}
            else{
                map_s.insert({c,1});
            }
        }
        for(auto c: t){
            if(map_t.contains(c)){++map_t[c];}
            else{
                map_t.insert({c,1});
            }
        }

        if(map_t.size() == map_s.size()){
            for(auto elem: map_s){
               auto s_key = elem.first;
               auto s_value = elem.second;
               if(map_t.contains(s_key)){
                    auto t_value = map_t[s_key];
                    if(t_value!= s_value){return false;}
                    else{continue;}
               }
               else{
                return false;
               }
            }
            return true;
        }
        else{
            return false;
        }


    }
};
