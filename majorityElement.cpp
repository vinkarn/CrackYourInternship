
    int majorityElement(vector<int>& nums) {
        //we will be using moore's voting algo in this case.
        //it can be solved using hashmaps or counting the element differently and checking which one occurs most
        int n = nums.size();
        int counter = 1;
        int currEle = nums[0];
        for(int i =1;i<n;i++){
            if(counter == 0){
                currEle = nums[i];
                counter = 1;
            }
            else if(nums[i]==currEle){
                counter++;
            }else{
                //the element is different
                counter--;
            }
        }
        return currEle;
    }
