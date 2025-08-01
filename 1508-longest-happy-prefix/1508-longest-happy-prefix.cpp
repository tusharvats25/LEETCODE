class Solution {
public:
    string longestPrefix(string s) {
        int pre=0,suf=1;
        vector<int>lps(s.size(),0);
        while(suf<s.size())
        {
            if(s[suf]==s[pre])
            {
                lps[suf]=pre+1;
                pre++,suf++;
            }
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
        int len = lps.back(); // length of longest prefix-suffix
        return s.substr(0, len);
    }
};