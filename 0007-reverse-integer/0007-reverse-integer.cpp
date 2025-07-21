// class Solution {
// public:
//     int reverse(int x) {
//         int res=0,rem;
//         while(x)
//         {
//             rem=x%10;
//             x/=10;
//            if(res>INT_MAX/10 || res<INT_MIN/10)
//            //if(res>(pow(2,31)-1)/10|| res<(pow(-2,31))/10)
//             return 0;
//             res=res*10+rem;
//         }
//         return res;
//    } 
// };

class Solution {
public:
    int reverse(int x) {
        int res=0,rem;
        while(x)
        {
            rem=x%10;
            x=x/10;
            if(res>INT_MAX/10 || res<INT_MIN/10)
            return 0;
            res=res*10+rem;
        }
        return res;
   } 
};