
//  this was the 2 pointer approach that came into my mind, it solves the problem but some test cases were not being solved using this approach
//the optimal solution is down below
    // int maxProfit(vector<int>& prices) {
    //     int n = prices.size();
    //     int low = 0;
    //     int high = n-1;
    //     int maxProfit=0;
    //     while(low<=high){
    //         int difference = prices[high]-prices[low];
    //         if(difference>0){//it is +ve
    //             maxProfit=max(maxProfit,difference);
    //             high--;
    //         }
    //         else if(difference<0){
    //             low++;
    //         }
    //         else{
    //             low++;
    //         }
    //     }

    //     if(maxProfit>0)
    //         return maxProfit;

    //     if(maxProfit<=0)
    //         return 0;//not finding answer
    //     return 0;        
    // }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP = prices[0];//minimum price
        int profit = 0;
        int currCost;
        for(int i =1;i<n;i++){
            currCost = prices[i]- minP;
            if(currCost>0){
            profit = max(profit, currCost);

            }
            else{
            minP = prices[i];

            }
        }
        return profit;
        
    }    