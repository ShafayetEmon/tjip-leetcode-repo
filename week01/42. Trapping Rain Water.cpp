class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxLeft = 0, maxRight = 0, trappedWater = 0;
        
        while(left<right)
        {
            maxLeft = max(maxLeft, height[left]);
            maxRight = max(maxRight, height[right]);
            
            if(height[left] < height[right])
            {
                trappedWater += (maxLeft - height[left]);
                left++;
            }
            else 
            {
                trappedWater += (maxRight - height[right]);
                right--;
            }
        }
        return trappedWater;
    }
};

//Time Complexity: O(N) Memory Complexity: O(1)