class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int>diff_map;
        diff_map.reserve(nums.size());
        for(int i = 0; i < nums.size(); i++){
            auto diff = target - nums[i];
            auto elem_it = diff_map.find(diff);
            if(elem_it!= diff_map.end()){
                return {diff_map[diff],i};
            }
            else{
                diff_map[nums[i]]=i;
            }
        }
        return {};
    }
};
