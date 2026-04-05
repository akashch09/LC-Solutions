class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
      int f=-1,l=-1;

        for(int i=0;i<n;i++){
            if(nums[i]==target) {
                f=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                l=j;
                break;
            }
        }
        return {f,l};
    }
};