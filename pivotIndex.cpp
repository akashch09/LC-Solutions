class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rsum=sum;
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            rsum=rsum-nums[i];
            if(lsum==rsum) return i;
            lsum=lsum+nums[i];
        }
        return -1;
    }
};