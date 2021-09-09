vector<int> c;
class Solution {
public:
    int sol(vector<int> &v,int i,int n)
    {
        if(i==n)
        {
            return 0;
        }
        if(i>n)
        {
            return 0;
        }
        if(c[i]!=-1)
        {
            return c[i];
        }
        int path1=v[i]+sol(v,i+1,n);
        int path2=v[i]+sol(v,i+2,n);
        return c[i]=min(path1,path2);
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        c=vector<int>(n,-1);
        return min(sol(cost,0,n),sol(cost,1,n));
    }
};