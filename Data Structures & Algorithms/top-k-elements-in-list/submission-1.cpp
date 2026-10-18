#include <unordered_map>
#include<queue>
#include <vector>
class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for(auto i: nums){ 
            auto it = freq.find(i);
            if(it== freq.end()){freq.insert({i,1});}
            else{it->second++;}
         }
        std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>, std::less<std::pair<int,int>>>freq_sorted;
        for(auto& [value,freq]:freq){
        freq_sorted.push({freq,value});
        }
        //get top k
        std::vector<int> return_value;
        for(int i= 0; i < k; i++){
            return_value.push_back((freq_sorted.top().second));
            freq_sorted.pop();
        }
        return return_value;
    }
};