
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            string nums=std::to_string(x);
            for(int i=0,j=nums.size()-1;i<j;i++,j--){
                if(nums[i]!=nums[j])
                return false;    
            }
            return true;
        }
    }
};