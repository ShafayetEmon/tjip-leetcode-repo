class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        
        int maxConsecutiveLength = 0;
        for(int num : seen)
        {
            if(seen.count(num-1) == 0)
            {
                int currentNum = num;
                while(seen.count(currentNum)) 
                    currentNum++;
                maxConsecutiveLength = max(maxConsecutiveLength, currentNum - num);
            }
        }
        
        return maxConsecutiveLength;
    }
};

//Time Complexity: O(N) Memory Complexity: O(N)