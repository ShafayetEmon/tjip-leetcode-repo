class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        
        for(int i = 0; i < len-2; i++)
        {
            if(i == 0 || nums[i] != nums[i-1])
            {
                int left = i + 1;
                int right = len - 1;
                while(left < right)
                {
                    int sum = nums[i] + nums[left] + nums[right];
                    if(sum == 0)
                    {
                        ans.push_back({nums[i], nums[left], nums[right]});
                        while(left < right && nums[left] == nums[left + 1])
                            left++;
                        while(left < right && nums[right] == nums[right-1])
                            right--;
                        left++;
                        right--;
                    }
                    else if(sum < 0)
                        left++;
                    else
                        right--;
                }
            }
        }
        
        return ans;
    }
};

//Time Complexity: O(N^2) Memory Complexity: O(N)