class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }else if(n==1){
            return true;
        }
        else{
            while(n%2==0){
                n=n/2;
            }
            if(n==1){
                return true;
            }else{
                return false;
            }
        }

    }
};



Optimized solution------------------------------------


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n < 1) return false;

//         while (n % 2 == 0) {
//             n /= 2;
//         }

//         return n == 1;
//     }
// };
