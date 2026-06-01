class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int minimum_cost=0;
        sort(cost.begin(),cost.end(),greater<int>());
        int n=cost.size();
    

        for(int i=0;i<n;i++)
        {
            if(i%3!=2)
            minimum_cost+=cost[i];
        }
        return minimum_cost;
    }
};