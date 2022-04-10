//Problem Link: https://leetcode.com/problems/product-of-array-except-self/

//First Approach:
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefix(len, 1);
        vector<int> postfix(len, 1);
        vector<int> ans(len, 1);
        
        prefix[0] = 1;
        for(int i = 1; i<len; i++)
        {
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        
        postfix[len-1];
        for(int i = len - 2; i >= 0; i--)
        {
            postfix[i] = postfix[i+1] * nums[i+1];
        }
        
        
        for(int i = 0; i < len; i++)
            ans[i] = prefix[i] * postfix[i];
        
        return ans;
    }
};

/*
Time complexity : O(N) 
Space complexity: O(N)
*/


//Second Approach: 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 1);
        
        int product = 1;
        for(int i = 0; i<len; i++)
        {
            ans[i] = product;
            product *= nums[i];
        }
        
        product = 1;
        for(int i = len - 1; i >= 0; i--)
        {
            ans[i] *= product;
            product *= nums[i];
        }
        
        return ans;
    }
};

/*
Time complexity : O(N) 
Space complexity: O(1)
*/
