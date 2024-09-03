
    int removeDuplicates(vector<int>& nums) {
        // int n = nums.size();
        // int countUnique = 1;
        // for(int i = 1;i<n;i++){
        //     if(nums[i]==nums[i-1]){
        //         continue;
        //     }
        //     countUnique++;
        // }
        // return countUnique;
        //the upper code is not the solution, i tried solving it in this way


        //here we alter the given array and store the unique elements in it only
        int n = nums.size();
        int j = 1;//to store the element in the original array
        
        for(int i = 1;i<n;i++){//iterating the whole array
            if(nums[i]!=nums[i-1]){//check if curr ele is not same as previous one
                nums[j]=nums[i];//if yes, store the unique one in the array using j index
                j++;//increment j
            }
        }

        return j;
    }