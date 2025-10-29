class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int start=0;
        int ans=0;
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


// class Solution {
// public:
//     int numberOfBeams(vector<string>& bank) {
//         int prev = 0, ans = 0;
        
//         for (string s : bank) {
//             int count = 0;
//             for (char c : s) {
//                 if (c == '1') {
//                     count++;
//                 }
//             }
//             if (count != 0) {
//                 ans += (prev * count);
//                 prev = count;
//             }
//         }
        
//         return ans;
//     }
// };