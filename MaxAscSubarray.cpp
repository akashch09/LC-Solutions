class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi = nums[0];
        int curMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                curMax += nums[i];
            } else {
                maxi = max(maxi, curMax);
                curMax = nums[i];
            }
        }

        maxi = max(maxi, curMax);
        return maxi;
    }
};