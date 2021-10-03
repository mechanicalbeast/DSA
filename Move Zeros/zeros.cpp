void moveZeroes(vector<int>& nums) {
        if(nums.size()==1 and nums[0]!=0) return;
        vector<int> temp(nums.size(),0);
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp[c]=nums[i];
                c++;
            }
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=temp[i];
        }
    }