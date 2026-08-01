class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int n=prices.size();
        //x=prices.size();
        for( int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                max_profit=max(max_profit,prices[j]-prices[i]);

            }
        }
        return max_profit;
    }
};
