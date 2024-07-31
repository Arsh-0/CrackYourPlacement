class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = INT_MAX;
        for(auto &i : prices)
        {
            if(i < buy) buy = i;    // if a cheaper prices comes, try buying on that day.
            else if(profit < i - buy) profit = i - buy; // if sold on same day, no profit is gained, if some day in future gives better profit sell on that day.
        }

        return profit;
    }
};