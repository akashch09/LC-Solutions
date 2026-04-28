class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        double sum=0;
        int count=0;
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
            count++;
        }
        double avg=sum/count;
        return avg;
    }
};