class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char i:jewels){
            for(char j:stones){
                if(i==j){
                    count++;
                }
            }
        
        }
        return count;
    }
};