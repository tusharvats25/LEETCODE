//optimized one
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         vector<bool>count(256,0);
//         int first=0,second=0,len=0;
//         while(second<s.size())
//         {
//             //Repeating Character
//             while(count[s[second]])
//             {
//                 count[s[first]]=0;
//                 first++;
//             }
//             count[s[second]]=1;
//             len=max(len,second-first+1);
//             second++;
//         }
//         return len;
//     }
// };


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int first=0,len=0;
//         unordered_set<char>charst;
//         for(int second=0;second<s.size();second++)
//         {
//             while(charst.find(s[second])!=charst.end())
//             {
//                 charst.erase(s[first]);
//                 first++;
//             }
//             charst.insert(s[second]);
//             len=max(len,second-first+1);
//         }
//         return len;
//     }
// };


// Constraints say "s consists of English letters, digits, symbols and spaces". 
// I think we have fixed max size of characters consisting of the input string.

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int len=0;
//         int first=0;
//         unordered_map<char,int>lastSeen;
//         for (int second= 0;second<s.length();second++){
//             char c=s[seecond];
//             if(lastSeen.find(c)!=lastSeen.end() && lastSeen[c]>=first) {
//                 first=lastSeen[c]+1;
//             }
//             len=max(len,second-first+1);
//             lastSeen[c]=second;
//         }
//         return len;        
//     }
// };


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//     int n=s.length();
//     int first=0,second=0;
//     int len=0;
//     while(second<n){
//         unordered_set<char>seen;
//         bool hasDuplicate=false;
//         // Check for duplicate between first and second
//         for (int i=first;i<second;i++) {
//             if (s[i]==s[second]) {
//                 hasDuplicate=true;
//                 break;
//             }
//         }
//         if(!hasDuplicate){
//             // No duplicate, extend window
//             len=max(len,second-first+1);
//             second++;
//         } else {
//             // Duplicate found, move both pointers
//             first++;
//             second=first;
//         }
//     }   
//     return len;
//     }
// };

//0ms
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//     int n=s.length();
//     if(n==0) return 0;
//     int first=0,second=0;
//     int len=0;
//     while(second<n) {
//         bool duplicateFound=false;
//         for (int i=first;i<second;++i) {
//             if(s[i]==s[second]){
//                 duplicateFound=true;
//                 // Move first to i + 1 (after the repeated character)
//                 first=i+1;
//                 break;
//             }
//         }
//         // Whether duplicate or not, we can check length
//         len=max(len,second-first+1);
//         second++;
//     }
//     return len;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int>seen(256,-1); // Initialize all to -1
    int n=s.length();
    int first=0;
    int len=0;
    for(int second=0;second<n;second++) {
        char curr=s[second];
        // If character seen before and inside current window
        if (seen[curr]>=first) {
            first=seen[curr]+1;
        }
        // Update last seen index of character
        seen[curr]=second;
        len=max(len,second-first+1);
    }
    return len;
    }
};