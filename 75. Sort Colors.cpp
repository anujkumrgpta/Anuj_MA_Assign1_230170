void sortColors(vector<int>& nums) {
        int zero=0,one=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            if(nums[i]==1) one++;
        }

        for(int i=0;i<zero;i++){
            nums[i]=0;
        }
        for(int i=zero;i<zero+one;i++){
            nums[i]=1;
        }
        for(int i=zero+one;i<nums.size();i++){
            nums[i]=2;
        }
    }