class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        for(int i = 1; i < prices.size(); ++i)
        {
            // trying to sell it everyday, if there is any profit at all
            if(prices[i - 1] < prices[i]) MaxProfit += prices[i] - prices[i - 1];
        }

        return MaxProfit;
    }
};
