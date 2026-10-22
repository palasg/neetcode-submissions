#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int idx1 = 0 ;
        int idx2 = 1;
        unordered_map<int,int> set_num{};
        for(int i = 0; i<numbers.size(); i++ )
        {
            int complement = target - numbers[i];
            auto it = set_num.find(complement);
            if(it== set_num.end()){
                set_num.insert({numbers[i], i});
            }
            else{
                auto indx = it->second;
                return {indx+1,i+1};
            }
            
        }
        
    }
};
