class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0, e=height.size()-1;
        int max_area = 0;
        int curr_area=0;
        
        while(s<e) {
            int min_height = min(height[s], height[e]);
            curr_area = (e-s)*min_height;
            max_area=max(max_area,curr_area);
            if(height[e]>=height[s]) s++;
            else e--;
        }
        return max_area;
        
    }
};
