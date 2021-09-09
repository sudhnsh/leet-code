vector<int> t(38,-1);
class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        else if(n==1||n==2)
        {
            return 1;
        }
        else
        {
            if(t[n]!=-1)
            {
                return t[n];    
            }
            t[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
            return t[n];
        }
    }
};