class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        
        for(int i = 1; i<prices.size(); i++)
        {
            int diff = prices[i] - prices[i-1];
            if(diff > 0) maxProfit += diff;
        }
        
        return maxProfit;
    }
};

//Time Complexity: O(n) Memory Complexity: O(1)