//First Approach-----------------------------------------
//Time Complexity: O(N) Memory Complexity: O(N)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        
        for(int i = 1; i <= nums.size()+1; i++){
            if(numbers.count(i) == 0) return i;
        }
        
        return 0;
    }
};


//Second Approach-----------------------------------------
//Time Complexity: O(N) Memory Complexity: O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        }
        
        for(int i = 0; i<n; i++) if(nums[i] != i+1) return i+1;
        
        return n+1;
    }
};


//Third Approach-----------------------------------------
//Time Complexity: O(N) Memory Complexity: O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            if(nums[i] <= 0 || nums[i] > n) nums[i] = n+1;
        }
        
   
        for(int i = 0; i <n; i++)
        {
            int index = abs(nums[i]) - 1;
            
            if (index >= 0 && index < n && nums[index] > 0) nums[index] *= -1;
        }
        
        for(int i = 0; i<n; i++)
        {
            if(nums[i] > 0) return i+1;
        }
        return n+1;
    }
};