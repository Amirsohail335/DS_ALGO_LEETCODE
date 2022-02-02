class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int start = 0, end = height.size()-1;
        
        while(start< end){
            
            int h = min(height[start], height[end]);
            int w = end - start;
            
            int current_area = h * w;
            
            max_area = max(current_area , max_area);
            
            if(height[start]< height[end]){
                start++;
            }else{
                end--;
            }
        }
        
        return max_area;
        
    }
};
