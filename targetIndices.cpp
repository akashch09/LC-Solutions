class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int num=0;
        int count=0;
        for(int x:nums){
            if(x==target){
                count++;
            }else if(x<target){
                num++;
            }
        }
        vector<int>ans;
        while(count>0){
            ans.push_back(num);
            num++;
            count--;
        }

        return ans;
    }
};