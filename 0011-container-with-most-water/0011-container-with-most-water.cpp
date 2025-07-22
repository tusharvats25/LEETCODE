
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,temp1=0,temp2=height.size()-1;
        while(temp1<temp2)
        {
            ans=max(ans,(min(height[temp1],height[temp2])*(temp2-temp1)));
            (height[temp1]<height[temp2])?temp1++:temp2--;
        }
        return ans;
    }
};  
