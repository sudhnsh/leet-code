vector<int> f(31,-1);
class Solution {
public:
    
    int fib(int n) { 
        if(n==1||n==0)
        {
            f[n]=n;
            return f[n];
        }
        else
        {
            if(f[n]!=-1)
            {
                return f[n];
            }
            f[n]=fib(n-1)+fib(n-2);
        }
        return f[n];
    }
};