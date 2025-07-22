// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if(dividend == INT_MIN && divisor == -1) return INT_MAX;
//         else if(dividend == INT_MAX && divisor == -1) return INT_MIN;
//         else return dividend / divisor;
//     }
// };
//993/994 cases pass

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        else if(dividend == INT_MAX && divisor == 1) return INT_MAX;
        else if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        else return dividend / divisor;
    }
};
//0ms and 100%.   t(c)=O(1)