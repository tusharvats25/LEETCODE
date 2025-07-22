// class Solution {
// public:
//     int num(char c)
//     {
//         if(c=='I')
//         return 1;
//         else if(c=='V')
//         return 5;
//         else if(c=='X')
//         return 10;
//         else if(c=='L')
//         return 50;
//         else if(c=='C')
//         return 100;
//         else if(c=='D')
//         return 500;
//         else
//         return 1000;
//     }

//     int romanToInt(string s) {
//         int index=0;
//         int sum=0;
//         while(index<s.size()-1)
//         {
//             if(num(s[index])>=num(s[index+1]))
//             sum+=num(s[index]);
//             else
//             sum-=num(s[index]);
//             index++;
//         }
//         sum+=num(s[index]);   //sum+=num(s[s.size()-1]);

//         return sum;
//     }
// };


// class Solution {
// public:
//     int romanToInt(string s) {
//         int res = 0;
//         unordered_map<char, int> roman = {
//             {'I', 1},
//             {'V', 5},
//             {'X', 10}, 
//             {'L', 50},
//             {'C', 100},
//             {'D', 500},
//             {'M', 1000}
//         };

//         for (int i = 0; i < s.size() - 1; i++) {
//             if (roman[s[i]] < roman[s[i + 1]]) {
//                 res -= roman[s[i]];
//             } else {
//                 res += roman[s[i]];
//             }
//         }

//         return res + roman[s[s.size() - 1]];        
//     }
// };

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};