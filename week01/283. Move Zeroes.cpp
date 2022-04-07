class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int leftPos = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[leftPos], nums[i]);
                leftPos++;
            }
        }
    }
};

//Time Complexity: O(N) Memory Complexity: O(1)