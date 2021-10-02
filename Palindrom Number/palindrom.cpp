class Solution {
public:
    bool isPalindrome(int x) {
        int a;
        long sum=0;
        int b;
        b=x;
        while(b>0)
        {
            a=b%10;
            sum=sum*10+a;
            b=b/10;
        }
        if(sum==x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};