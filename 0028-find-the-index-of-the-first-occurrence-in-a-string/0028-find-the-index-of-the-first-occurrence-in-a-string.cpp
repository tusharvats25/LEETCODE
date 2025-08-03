//STL
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         return haystack.find(needle);
//     }
// };



class Solution {
public:
    void lps_find(vector<int>&lps , string s)
    {
        int pre=0,suf=1;
        while(suf<s.size())
        {    //Match
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++,suf++;
            }
            
            //Not Match
            else
            {
                if(pre==0)
                {
                     lps[suf]=0;
                     suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }    
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lps_find(lps,needle);
        int first=0,second=0;
        while(first<haystack.size() && second<needle.size())
        {
            if(haystack[first]==needle[second])
            {
                first++,second++;
            }
            else
            {
                if(second==0)
                {
                    first++;
                }
                else
                {
                    second=lps[second-1];
                }
            }
        }
        if(needle.size()==second)
        return first-second;

        return -1;
    }
};

