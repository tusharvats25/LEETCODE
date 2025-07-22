//308/313 tle
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//       vector<vector<int>>ans;
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     for (int i=0;i<n-2;i++) {
//         for (int j=i+1;j<n-1;j++) {
//             for (int k=j+1;k<n;k++) {
//                 if (nums[i]+nums[j]+nums[k]==0) 
//                 {
//                     vector<int>v={nums[i],nums[j],nums[k]};
//                     if (find(ans.begin(),ans.end(),v)==ans.end()) {
//                         ans.push_back(v);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// };



//O(n^2) tc and sc both
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>>s;
        int i = 0;
        int j = 1;
        int k = n - 1;

        while (i < n-2) {
            if(nums[i]>0)break;
            j = i+1;
            k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0 ) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;k--;
                }
                if(sum < 0)
                j++;
                if(sum > 0)
                k--;
            }
            i++;
        }
        for(auto i : s)
        v.push_back(i);

        return v;
    }
};


//O(n^2logn) ans S(C) is O(n^2)
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int x = 0;
//         sort(nums.begin(), nums.end()); // Sorting the array
//         vector<vector<int>> ans;
        
//         for (int i = 0; i < nums.size() - 2; i++) {
//             // Skip duplicate values for the first element
//             if (i > 0 && nums[i] == nums[i - 1]) continue;

//             for (int j = i + 1; j < nums.size() - 1; j++) {
//                 // Skip duplicate values for the second element
//                 if (j > i + 1 && nums[j] == nums[j - 1]) continue;

//                 int find = -nums[i] - nums[j];
//                 int start = j + 1, end = nums.size() - 1;

//                 while (start <= end) {
//                     int mid = start + (end - start) / 2;
//                     if (nums[mid] == find) {
//                         ans.push_back({nums[i], nums[j], nums[mid]});
                        
//                         // Skip duplicate third elements after adding a triplet
//                         while (mid + 1 <= end && nums[mid] == nums[mid + 1]) mid++;
//                         start = mid + 1; // Move start to the right after finding a valid triplet
//                         break;
//                     } 
//                     else if (nums[mid] > find) {
//                         end = mid - 1;
//                     } 
//                     else {
//                         start = mid + 1;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };
