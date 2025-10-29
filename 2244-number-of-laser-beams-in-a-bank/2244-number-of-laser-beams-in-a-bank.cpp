class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int start=0,ans=0;
        for(auto& i : bank)
        {
            int curr=count(i.begin(),i.end(),'1');
            if(curr>0)
            {
                ans+=start*curr;
                start=curr;
            }
        }
        return ans;
    }
};