/* Brute force O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
*/

//Using map O(N)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size();i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        // If no solution is found, return an empty vector or handle error.
        return {};
    }
};
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end())
            return {i,mp[complement]};
            //mp[nums[i]]=i;
            //mp.insert({nums[i], i});
            mp.emplace(nums[i], i);
        }
        return {};
    }
};
