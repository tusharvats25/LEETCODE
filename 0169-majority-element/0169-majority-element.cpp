//UNORDERED MAP
//O(N)
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
      int n=nums.size();
      unordered_map<int,int>m;
      for(auto a: nums)
      {
          m[a]++;
          if(m[a]>n/2)
          return a;
      }
       return -1;  
    }
};
*/

//BRURTE FORCE
//O(N^2)
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                count++;
            }
            if(count==n/2)
        }
        return i;
    }
    };
    */
    //M3 MID IS MAJORITY ELEMENT
    /*
    class Solution
    {
        public:
        int majorityElement(vector<int>&nums) {
            sort(nums.begin(),nums.end());
            return nums[(int)nums.size()/2];
        }
    };
    */

    //M4 MOOREY ALGO
// class Solution {
//     public: 
//     int majorityElement(vector<int>& nums) {
//         int candidate=INT_MIN;
//         int life=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]==candidate)
//             life++;
//             else if(life==0)
//             {
//                 candidate=nums[i];
//                 life=1;
//             }
//             else
//             life--;
//         }
//         return candidate;
//     }
// };

class Solution {
    public: 
    int majorityElement(vector<int>& nums) {
        int vote=1;
        int n=nums.size();
        int candidate=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==candidate)
            vote++;
            else if(vote==0)
            {
                candidate=nums[i];
                vote=1;
            }
            else
            vote--;
        }
        return candidate;
    }
};
