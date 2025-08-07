class Solution {
public:
    long long sumScores(string s) {
        int n = s.size();
        vector<long long> lps(n, 0);
        long long pre = 0, suf = 1;

        // Build LPS array
        while (suf < n) {
            if (s[suf] == s[pre]) {
                lps[suf] = pre + 1;
                pre++, suf++;
            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }

        // Build count array using lps
        vector<long long> cnt(n, 0);
        for (int i = 0; i < n; ++i) {
            if (lps[i] == 0) cnt[i] = 0;
            else cnt[i] = cnt[lps[i] - 1] + 1;
        }

        // Sum all counts and add n (each character is counted at least once as its own suffix)
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += cnt[i];
        }

        return sum + n;
    }
};
