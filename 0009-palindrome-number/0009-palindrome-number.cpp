/*
class Solution {
public:
    bool isPalindrome(int x)
     {
        if(x<0)
            return false;
        long int ans=0;
        long int temp=x;
        while(temp!=0)
        {
           long int rem=temp%10;
           ans=ans*10+rem;
           temp/=10;
        }
         return (ans==x);
    }
};
*/


class Solution {
public:
    bool isPalindrome(int x)
     {
        if(x<0)
            return false;
        int ans=0;
        int temp=x;
        while(temp!=0)
        {
           int rem=temp%10;
           if(ans>INT_MAX/10)
           return 0;
           ans=ans*10+rem;
           temp/=10;
        }
         return (ans==x);
    }
};