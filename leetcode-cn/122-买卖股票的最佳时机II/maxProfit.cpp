/*
只要今天能够盈利就进行买卖
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
        {
            return 0;
        }
        int iMaxProfit = 0;
        for(int i = 1; i < prices.size(); ++i)
        {
            if(prices[i] > prices[i - 1])
            {
                iMaxProfit += (prices[i] - prices[i - 1]);
            }
        }
        return iMaxProfit;
    }
};
