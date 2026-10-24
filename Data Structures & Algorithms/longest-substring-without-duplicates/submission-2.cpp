class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen_pos(128, -1);
        int len= 0;
        int left = 0;
        
        for(int right = 0; right<s.size(); right++){
            char c = s[right];
            if(last_seen_pos[c] >= left){
                left = last_seen_pos[c]+1;
            }
            last_seen_pos[c] = right;
            len = max(len, right-left+1);
        }
         return len;
    }
};
