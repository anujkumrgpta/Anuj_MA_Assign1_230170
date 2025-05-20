int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        if(nums.size()==0) return 0;
        v.push_back(nums[0]);
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(v[j]!=nums[i]){
                v.push_back(nums[i]);
                j++;
            }
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        return v.size();
    }