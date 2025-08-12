// //KMP O(N) SOLUTION
// class Solution {
// public:
//      //CREATED
//     void lps_find(vector<int>&lps,string s)
//     {
//         int pre=0,suf=1;
//         while(suf<s.size())
//         {
//             if(s[pre]==s[suf])
//             {
//                 lps[suf]=pre+1;
//                 pre++,suf++;
//             }
//             else
//             {
//                 if(pre==0)
//                 {
//                     lps[suf]=0;
//                     suf++;
//                 }
//                 else
//                 {
//                     pre=lps[pre-1];
//                 }
//             }
//         }
//     }
//     //CREATED
//     int KMP_MATCH(string haystack, string needle) {
//         vector<int>lps(needle.size(),0);
//         lps_find(lps,needle);
//         int first=0,second=0;
//         while(first<haystack.size() && second<needle.size())
//         {
//             if(haystack[first]==needle[second])
//             {
//                 first++,second++;
//             }
//             else
//             {
//                 if(second==0)
//                 {
//                     first++;
//                 }
//                 else
//                 {
//                     second=lps[second-1];
//                 }
//             }
//         }
//         if(second==needle.size())
//         return 1;

//         return 0;
//     }

//     //GIVEN FXN
//     int repeatedStringMatch(string a, string b) {
//         if(a==b)
//         return 1;

//         int repeat=1;
//         string temp=a;

//         while(temp.size()<b.size())
//         {
//             temp+=a;
//             repeat++;
//         }

//         //KMP PATTERN SEARCH
//         if(KMP_MATCH(temp,b)==1)
//         return repeat;

//         //TEMP+A KMP PATTERN SEARCH
//         if(KMP_MATCH(temp+a,b)==1)
//         return repeat+1;


//         return -1;


//     }
// };     



//KMP O(N) SOLUTION
class Solution {
public:
    void lps_find(vector<int>& lps, string s) {
        for (int pre = 0, suf = 1; suf < s.size();) {
            if (s[pre] == s[suf]) lps[suf++] = ++pre;
            else if (pre) pre = lps[pre - 1];
            else lps[suf++] = 0;
        }
    }

    int KMP_MATCH(string haystack, string needle) {
        vector<int> lps(needle.size());
        lps_find(lps, needle);
        for (int first = 0, second = 0; first < haystack.size();) {
            if (haystack[first] == needle[second]) {
                first++; second++;
                if (second == needle.size()) return 1;
            } else if (second) second = lps[second - 1];
            else first++;
        }
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        if (a == b) return 1;
        int repeat = 1;
        string temp = a;
        while (temp.size() < b.size()) temp += a, repeat++;
        if (KMP_MATCH(temp, b)) return repeat;
        if (KMP_MATCH(temp + a, b)) return repeat + 1;
        return -1;
    }
};
