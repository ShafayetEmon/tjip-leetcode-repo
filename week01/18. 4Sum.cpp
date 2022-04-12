class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        int len = nums.size();
        for(int i = 0; i < len-3; i++)
        {
            if(i  > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < len-2; j++)
            {
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                
                int targetSum = target - (nums[i] + nums[j]);
                int left = j+1, right = len-1;
                while(left < right)
                {
                    if(nums[left] + nums[right] == targetSum)
                    {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while(right > left && nums[left] == nums[left + 1]) left++;
                        while(right > left && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    }
                    else if(nums[left] + nums[right] < targetSum)
                        left++;
                    else
                        right--;
                }
            }
        }
        return result;
    }
};

/*
Time complexity : O(N^3) 
Space complexity: O(N)
*/