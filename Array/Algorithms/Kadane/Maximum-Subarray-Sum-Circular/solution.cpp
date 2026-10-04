class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums){
        int wsum,nwsum,tsum=0;
        nwsum=kadane(nums);

        if(nwsum<0){
            return nwsum;
        }

        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
            nums[i]=-nums[i];
        }

        wsum=tsum+kadane(nums);
        wsum=max(wsum,nwsum);

        return wsum;
    }

    int kadane(vector<int>& nums){
        int csum=0;
        int msum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            csum+=nums[i];
            msum=max(msum,csum);

            if(csum<0){
                csum=0;
            }
        }

        return msum;
    }
};