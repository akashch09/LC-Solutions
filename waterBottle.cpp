class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            int newBottles=numBottles/numExchange;
            int rem=numBottles%numExchange;
            ans= ans+newBottles;
            numBottles=newBottles+rem;
        }
        return ans;
    }
};