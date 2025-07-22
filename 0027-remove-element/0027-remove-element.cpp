class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        while(find(nums.begin(),nums.end(),val)!=nums.end()) 
        {
           nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        }
        return nums.size();
    }
};
