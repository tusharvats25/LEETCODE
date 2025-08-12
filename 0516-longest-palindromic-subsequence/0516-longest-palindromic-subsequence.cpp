//Tabulation time and space O(n*n)
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();

    // Create two vectors: one for the current state (dp)
    // and one for the previous state (dpPrev)
    vector<int> curr(n), prev(n);

    // Loop through the string in reverse (starting from the end)
    for (int i = n - 1; i >= 0; --i){

        // Initialize the current state of dp
        curr[i] = 1;

        // Loop through the characters ahead of i
        for (int j = i + 1; j < n; ++j){

            // If the characters at i and j are the same
            if (s[i] == s[j]){

                // Add 2 to the length of the palindrome between them
                curr[j] = prev[j - 1] + 2;
            }
            else{

                // Take the maximum between excluding either i or j
                curr[j] = max(prev[j], curr[j - 1]);
            }
        }

        // Update previous to the current state of dp
        prev = curr;
    }

    return curr[n-1];
    }
};


//Memoization Space and time O(n*n)
// class Solution {
// public:
//     int lps(const string& s, int low, int high, 
//                         vector<vector<int>> &memo) {

//     // Base case
//     if(low > high) return 0;
  
//     // If there is only 1 character
//     if (low == high)
//         return 1;

//     // If the value is already calculated
//     if(memo[low][high] != -1) 
//         return memo[low][high];

//     // If the first and last characters match
//     if (s[low] == s[high])
//         return memo[low][high] = 
//                 lps(s, low + 1, high - 1, memo) + 2;

//     // If the first and last characters do not match
//     return memo[low][high] = 
//       			max(lps(s, low, high - 1, memo),
//                          lps(s, low + 1, high, memo));
// }

//     int longestPalindromeSubseq(string s) {
//         vector<vector<int>> memo(s.size(), 
//                     vector<int>(s.size(), -1));
//     return lps(s, 0, s.size() - 1, memo);
//     }
// };