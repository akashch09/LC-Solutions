// With sroting 
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         return nums[n-k];
       
//     }
// };


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int x : nums) {
            pq.push(x);
            if(pq.size() > k) {
                pq.pop(); 
            }
        }

        return pq.top(); 
    }
};


