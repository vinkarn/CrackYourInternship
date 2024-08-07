
    void moveZeroes(vector<int>& nums) {

        int p1 = 0, n = nums.size()-1;
        int p2 = 1;

        //count the num of zeros present in the array
        int countZero =0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0)
                countZero++;
        }

        //Run the for loop that num of times
        for(int i =0;i<countZero;i++){
            p1=0, p2 = 1;
            while(p2<=n){//for each no. of zero, move it to the last position of the array
                if(nums[p1]==0){
                    swap(nums[p1], nums[p2]);//consecutive swap for first no. to be zero
                        p1++;
                        p2++;
                    }else{//for non_zero no., just move forward
                        p1++;
                        p2++;
            }
            }
        }
    }