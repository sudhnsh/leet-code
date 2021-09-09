vector<int> v(46,-1);
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
        {
            return 1;
        }
        else if(n==2)
        {
            return 2;
        }
        else
        {
            if(v[n]!=-1)
            {
                return v[n];
            }
            return v[n]= climbStairs(n-1)+climbStairs(n-2);
        }
        
    }
};