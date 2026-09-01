class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int buy = prices[0];
        int profit ;
        int max = 0 ;
        
        for(int i = 1 ; i < prices.size() ; i++){
            if(prices[i] > buy){
                profit = prices[i] - buy ;
                if(profit > max){
                    max = profit ;
                }
            }
            else{
                buy = prices[i] ;
            }
        }
        return max ;
          
    }
};
