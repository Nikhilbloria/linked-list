class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxi = 0;
        while(low<high){
            int width = high-low;
            int heigh = min(height[low],height[high]);
            int store = width * heigh;
            maxi = max(maxi,store);
            if(height[low]<height[high]){
                low++;
            }else{
                high--;
            }
        }return maxi;
    }
};