//O(log n) s(O(1))

/*
class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    if (l==nums.size()||nums[l]!=target)
    {
      return{-1,-1};
    }
    int r=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1; 
    return {l,r};
  }
};
*/

//brute force


/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int array[]={-1,-1};
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
             array[0]=i;
             break;
            }
        }
         for(int i=n-1;i>0;i--)
        {
            if(nums[i]==target)
            {
             array[1]=i;
             break;
            }
        }
        if(array[0]!=-1 && array[1]==-1)
        {
            array[1]=array[0];
        }
         
        ans.push_back(array[0]);
         ans.push_back(array[1]);
         return ans;
    }
};
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int mid;
        int first=-1,last=-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
            first=mid;
            end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }

        start=0,end=nums.size()-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
            last=mid;
            start=mid+1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        vector<int>res(2);
        res[0]=first;
        res[1]=last;
        return res;
    }
};



