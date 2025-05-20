int maxProduct(vector<int>& nums) {

        // since the problem is when we have odd number of negative numbers and we need to deal with that only so it can be at the starting or at the ending so, We will basically calculate the product from the left and right
        // and give the maximum of two 
        int maxima = INT_MIN;
        int prod = 1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxima=max(maxima,prod);
            if(prod==0){
                prod=1;            //when 0 arises we would need to do the product again removing the subarray containing 0 and move to enen smaller subarray.
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxima=max(maxima,prod);
            if(prod==0){
                prod=1;
            }
        }
        return maxima;
    }