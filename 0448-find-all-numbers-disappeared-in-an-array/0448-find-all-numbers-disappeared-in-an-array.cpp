//32/35 TLE
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int>res;
//         int n=nums.size();
//         for(int i=1;i<=n;i++)
//         {
//             int j;
//             for(j=0;j<n;j++)
//             {
//                 if(nums[j]==i)
//                 break;
//             }
//             if(j==n)
//             res.push_back(i);
//         }

//         return res;
//     }
// };



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            res.push_back(i);
        }

        return res;
    }
};