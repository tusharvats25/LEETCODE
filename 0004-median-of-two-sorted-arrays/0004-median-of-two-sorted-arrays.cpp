class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans=nums1;
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        // Sort the combined array
        sort(ans.begin(),ans.end());
        // Find the median
        int n=ans.size();
        if(n%2==0) 
            // Even length: average of the middle two elements
            return (ans[n/2-1]+ans[n/2])/2.0;
        else 
            // Odd length: middle element
            return ans[n/2];
    }
};