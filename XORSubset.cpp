class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int b = 0;
        for (int num : nums) {
            b|= num;
        }
        return b << (nums.size() - 1);
    }
};