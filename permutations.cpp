class Solution {
public:

    vector<vector<int>>result;

    void permu(vector<int>&nums,int i,int n){
        if(i==n){
            result.push_back(nums);
            return ;
        }
        for(int j=i;j<=n;j++){
            swap(nums[i],nums[j]);
            permu(nums,i+1,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permu(nums,0,nums.size()-1);
        return result;
    }
};