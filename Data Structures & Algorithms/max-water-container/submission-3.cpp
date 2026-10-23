class Solution {
public:
    int maxArea(vector<int>& heights) {

        int max_area = -1;
        int left = 0; 
        int right = heights.size() -1;
        while(right > left){
            auto current_area = (right-left)*min(heights[left], heights[right]);
            if(max_area < current_area){max_area = current_area;}
            if(heights[left] < heights[right]){left++;}
            else if(heights[left] > heights[right]){--right;}
            else{left++;}
            // println("left: {} right: {}", left, right);
        }

        return max_area;

    }

 
        
  
};
