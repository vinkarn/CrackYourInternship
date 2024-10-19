int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi =INT_MIN;
        int totalProfit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                totalProfit+=prices[i]-prices[i-1];
            }
        }
        return  totalProfit;
    }    
