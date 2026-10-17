class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int>diff_map;
        for(int i = 0; i < nums.size(); i++){
            auto diff = target - nums[i];
            if(diff_map.contains(diff)){
                return {diff_map[diff],i};
            }
            else{
                diff_map.insert({nums[i],i});
            }
        }
        return {};
    }
};
