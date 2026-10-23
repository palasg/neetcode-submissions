class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = prices[0];
        int max_profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            int current_price = prices[i];
            if (current_price > sell) {
                sell = current_price;
            } else if (current_price < buy) {
                buy = current_price;
                sell = current_price;
            }
            int current_profit = sell - buy;
            if (max_profit < current_profit) {
                max_profit = current_profit;
            }
        }
        return max_profit;
        
    }

};
