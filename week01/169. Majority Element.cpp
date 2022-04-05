class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement = 0, frequency = 0;
        
        for(auto num : nums)
        {
            if(frequency == 0) majorityElement = num;
            if(num == majorityElement) frequency++;
            else frequency--;
        }
        
        return majorityElement;
    }
};

//Time Complexity: O(n) Memory Complexity: O(1)