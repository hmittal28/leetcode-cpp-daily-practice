class Solution {
public:
    int fib(int n) 
    {
        int total;
        if(n==0)
        {
            total=0;
        }
        else if(n==1)
        {
            total=1;
        }
        else
        {
            total=fib(n-1)+fib(n-2);
        }
        return total;
    }
};