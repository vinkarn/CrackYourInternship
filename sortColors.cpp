class Solution {
public:
    void sortColors(vector<int>& nums) {
        //mine approach or one liner
        
        // sort(nums.begin(), nums.end());// this is the complete code for my approach 1
        
        
        //it solves the whole problem but the approach will not satisfy the inteviewer
        
        //OR
        //we can use the Dutch Nartional Flag Algorithm
        //divide the array into 3 parts (for 0 ,for 1 and for 2)
        //use 3pointer approach to locate the  element
        // for its value to be 0, through it in front
        // for 1 keep it in its position only. Just move the pointer
        // for 2 through it in the end
        
        
        int low = 0; int high = nums.size()-1; int mid =0;//mid doesnt mean to be mid elemnt
        //the mid the traverse from the begin to end
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{//for num to 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};