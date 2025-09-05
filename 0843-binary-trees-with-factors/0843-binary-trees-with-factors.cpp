//O(N^2)
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        const int mod=1e9+7;
        unordered_map<int,long long>dp;
        set<int>st;
        for (int it : arr) 
        {
            dp[it]=1; // Each number can be a tree by itself
        }
        sort(arr.begin(), arr.end());
        for (int it : arr) {
            for (int a : st) {
                if (it%a==0 && dp.count(it/a)) 
                {
                    dp[it]=(dp[it]+dp[a]*dp[it/a])%mod;
                }
            }
            st.insert(it);
        }
        long long result=0;
        for (const auto& pair : dp) {
            result=(result+pair.second)%mod;
        }
        return result;
    }
};