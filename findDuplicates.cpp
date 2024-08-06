class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();//store the size of array
        sort(nums.begin(), nums.end());//sort the array
        int p1=0, p2=1;//create 2 pointers, fisrt at the start, 2nd and the 2nd position
        while(p2<=n-1){
            if(nums[p1]==nums[p2]){//check if 2 consecutive elements are same or not
                return nums[p1];//if same return the duplicate element
            }
            p1=p2;//move forward
            p2+=1;
        }
        return -1;//if nothing duplicate is found
    }
};
