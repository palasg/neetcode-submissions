class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int num_len = nums.size();
        vector<int>prefix(num_len,1);
        vector<int>suffix(num_len,1);
        int prefix_mul = 1;
        int suffix_mul = 1;
        for(int i = 0; i < num_len; i++){
            prefix[i] =prefix_mul; 
            prefix_mul=prefix_mul*nums[i];
        }
        for(int i = num_len-1; i >=0; i--){
            suffix[i] =suffix_mul; 
            suffix_mul=suffix_mul*nums[i];
        }
        for(int i = 0; i< num_len; i++){
            prefix[i] = prefix[i]*suffix[i];
        }
        return prefix;
    }

};
