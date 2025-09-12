class Solution {
public:
void solve(int start,unordered_map<int,vector<int>>&map,vector<bool>&visited)
{
    visited[start]=true;
    for(auto i:map[start])
    {
        if(!visited[i] )
        {
            solve(i,map,visited);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,vector<int>>map;
        for(int i=0;i<rooms.size();i++)
        {
            vector<int>v=rooms[i];
            map[i]=v;
        }
        int n=rooms.size();
        vector<bool>visited(n,false);
        
        solve(0,map,visited);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            return false;
        }
        return true;
    }
};