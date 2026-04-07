class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        for(int x:arr){
            m[x]++;
        }
        int ans=-1;

        for(auto i:m){
            if(i.first==i.second){
                ans=max(ans,i.first);
            }
        }
        return ans;
    }
};