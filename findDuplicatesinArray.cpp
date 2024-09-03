vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mpp;
        for(int i =0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int> ans;
        
        for(auto it:mpp){
            auto curr = it.second;
            if(curr==2){
                ans.push_back(it.first);
            }

        }
        return ans;
    }