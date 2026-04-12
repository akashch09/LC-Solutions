class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    for (int x : nums1) result.push_back(x);
    for (int x : nums2) result.push_back(x);
    sort(result.begin(),result.end());
    int s=result.size();
   
        if(s%2==0){
            return (result[s/2]+result[(s/2)-1])/2.0;
        }
        else{
            return result[s/2];
        }
    


    }
};