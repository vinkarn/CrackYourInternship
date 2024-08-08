class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int p1 = 0;
        // int p2 = 1;
        // while(p2<=n-1){
        //     if((nums[p1]+nums[p2])==target){
        //         return {p1,p2};

        //     }
        //     p1++;
        //     p2++;
        // }
        // return {-1,-1};

        // int n = nums.size();
        // int low = 0;
        // int high = n -1;
        // int more = 0;
        // vector<int> hasharr={0};
        // for(int i = 0;i<n;i++){
        //     hasharr[nums[i]]+=1;
        // }
        // while(low<=high){
        //     more = target - nums[low];
        //     if(hasharr[more]>0){
        //         return {nums[low], hasharr[more]};
        //     }else{
        //         low=low+1
        //     }

        // }
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // int low = 0;//front pointer
        // int high = n-1;//back pointer
        // while(low<=high){
        //     if((nums[low]+nums[high])==target){
        //         return {low,high};
        //     }else if((nums[low]+nums[high])<target){
        //         low++;
        //     }else{
        //         high--;
        //     }
        // }
        // return {-1,-1};
        //using a map datastructure will be helpful here
        map<int,int> mpp;
        int n = nums.size();//size of array
        for(int i = 0;i<n;i++){
            int currElement = nums[i];//storing current element
            int more = target - currElement;//how much more is needed
            if(mpp.find(more)!=mpp.end())//check is it present in the map ds?
                return {i,mpp[more]};//if yes return the index
            mpp[currElement]=i;//otherwise store the current element as key, store index in value
        }
        return {-1,-1};//not found in the array
    }
};