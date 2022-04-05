class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 10e4, maxProfit = 0;
        for(int price : prices)
        {
            maxProfit = max(maxProfit, price - minPrice);
            minPrice = min(minPrice, price);
        }
        
        return maxProfit;
    }
};

//Time Complexity: O(n) Memory Complexity: O(1)