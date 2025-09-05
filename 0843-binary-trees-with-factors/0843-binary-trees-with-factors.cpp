//O(N^2)
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        const int mod=1e9+7;
        unordered_map<int,long long>mp;
        set<int>st;
        for (int i : arr) 
        {
            mp[i]=1; // Each number can be a tree by itself
        }
        sort(arr.begin(), arr.end());
        for (int i : arr) {
            for (int j : st) {
                if (i%j==0 && mp.count(i/j)) 
                {
                    mp[i]=(mp[i]+mp[j]*mp[i/j])%mod;
                }
            }
            st.insert(i);
        }
        long long result=0;
        for (const auto& pair : mp) {
            result=(result+pair.second)%mod;
        }
        return result;
    }
};