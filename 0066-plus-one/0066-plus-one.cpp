        class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
             
            digits[i]=0;
            
             
			else  
            {
                digits[i]++; return digits;
            }   // means now left side won't increase by 1
        }
        // like 99 change to 100
           digits.push_back(0);
           digits[0]=1;
        return digits;
    }
    
};