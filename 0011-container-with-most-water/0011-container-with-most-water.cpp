class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int water = 0;
        while(left < right){
            int length = min(height[left],height[right]);
            int breath = right - left;
            if((length * breath) > water){
                water = length * breath;
            }
            if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return water;
    }
};