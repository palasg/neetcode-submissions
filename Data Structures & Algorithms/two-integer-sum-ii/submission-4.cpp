
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low_idx = 0 ;
        int high_idx = numbers.size()-1;
        for(;low_idx != high_idx;){
            int sum = numbers[low_idx]+ numbers[high_idx];
            if(target == sum ){return {low_idx+1, high_idx+1};}
            else if(target < sum){high_idx = high_idx - 1;}
            else {low_idx = low_idx+1;}
        }
            
    }
        
    
};
