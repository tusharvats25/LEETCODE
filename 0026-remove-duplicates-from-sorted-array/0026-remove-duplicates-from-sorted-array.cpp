//two pointers apporoach
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int i=0,j;
        for(j=1;j<nums.size();j++){
            if(nums[i]!=nums[j])
            {
                i++;
            }
            nums[i]=nums[j];
        }
        return i+1;
    }
};
*/

//simple apporoach
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
*/

//Using set
/*
#include<iostream>
#include<set>
using namespace std;
int main() 
{
  int n;
  cin>>n;
  set<int>s;
  for (int i=0;i<n;i++) 
  {
    int x;
    cin>>x;
    s.insert(x);
  }
  for (int x:s) 
  {
    cout<<x<<" ";
  }
  cout<<endl;
  return 0;
}
*/

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0)
        return 0;
    int j=0;
    for (int i=0;i<nums.size()-1;i++)
        if (nums[i]!=nums[i+1])
            nums[j++]=nums[i];
    nums[j++]=nums[nums.size()-1];
    return j;  
    }
};
*/



//You are required to move the unique elements to the start of the array 
//And return the count of unique elements.
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
               nums.erase(unique(nums.begin(), nums.end()), nums.end());   
               return nums.size();
     }
};
*/

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
               set<int>s(nums.begin(),nums.end());
               copy(s.begin(), s.end(), nums.begin()); 
               return s.size();
     }
};
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        nums.clear();
        nums.assign(s.begin(),s.end());
        return nums.size();
    }
};

