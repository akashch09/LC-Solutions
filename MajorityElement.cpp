class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]) {
             count++;
             if(count>n/2){
                 return nums[i];
             }
            }else{
                count=1;
            }
            }
       return -1;
       
    }
};