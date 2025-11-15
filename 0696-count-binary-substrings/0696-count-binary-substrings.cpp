class Solution {
public:
    int countBinarySubstrings(string s) {
        int count=0;
        int prev=0;
        int curr=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]!=s[i])
            {
            count+=min(prev,curr);
            prev=curr;
            curr=1;
            }
            else
            curr++;
        }
        int ans=min(prev,curr);
        return count+ans;
    }
};