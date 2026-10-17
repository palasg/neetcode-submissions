#include<algorithm>
#include<unordered_set>
// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         if(nums.empty()){return false;}
//         std::sort(nums.begin(), nums.end());
//         for(std::size_t i = 0; i < nums.size()-1; i++){
//             if(nums[i]== nums[i+1])
//             { return true;}
//         }   
//         return false;
//     }
// };

class Solution{
    public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()){return false;}
        
        std::unordered_set<int>hash;
        for(auto& i : nums){
            if(hash.contains(i)){return true;}
            else{
                hash.insert(i);
            }
        }
        return false;
    }
};