class Solution {
public:
    map<pair<int,int>, int> memo;
    int recursive(vector<int>&a, int index, int target){
        if(index==0){
            if(target==0) return 1;
            return 0;
        }
        pair<int,int> p= make_pair(index,target);
        if(memo.count(p)) return memo[p];
        return memo[p]= recursive(a,index-1,target-a[index-1]) + recursive(a,index-1,target+a[index-1]);
    }
    
    int findTargetSumWays(vector<int>& a, int target) {
        return recursive(a ,a.size(),target);
    }
};