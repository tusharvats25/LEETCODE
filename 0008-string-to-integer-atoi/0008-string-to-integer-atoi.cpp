class Solution {
public:
    int myAtoi(string str) {
        int p=0;  // Initialize an integer variable to store the ans
        stringstream tt;  // Create a stringstream object tt
        tt << str;  // Put the input string into the stringstream tt
        tt >> p;  // Extract an integer from the stringstream and store it in 'p'
        return p;  // Return the Extracted integer
    }
};

// class Solution {
// public:
//     int myAtoi(string s) {
//         // object from the class stringstream
//     stringstream geek(s);
  
//     // The object has the value 12345 and stream
//     // it to the integer x
//     int x = 0;
//     geek >> x;
//     return x;
  
        
//     }
// };


// class Solution {
// public:
//     int myAtoi(string str) {
//         if(str.size()==0 || str.back()==' ')
//          str.push_back('0');
//         stringstream ss(str);
//         int x;
//         ss>>x;
//         return x;
//     }
// };