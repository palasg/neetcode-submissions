#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> item_idx{};
        int j = 0;
        for (auto i : nums) {
            item_idx.insert({i});
           }
        vector<vector<int>> sequences{};  // [2,20,4,10,3,4,5]
        vector<int> sequence{};
        for (int i = 0; i < nums.size(); i++) {
            if (item_idx.find(nums[i] - 1) == item_idx.end()) {
                sequence.push_back(nums[i]);
                auto sequence_current = nums[i];
                while (item_idx.find(sequence_current + 1) != item_idx.end()) {
                    sequence.push_back(sequence_current);
                    sequence_current = sequence_current + 1;
                }
            }
            sequences.push_back(sequence);
            sequence.clear();
        }
        
        int max_len = 0;
        for (auto i = 0; i < sequences.size(); i++)
            if (max_len < sequences[i].size()) {
                   max_len = sequences[i].size();
            }

            return max_len;
    }
};
