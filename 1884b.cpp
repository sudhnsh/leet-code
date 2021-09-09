vector<vector<int>> c;
class Solution {
public:
    int sol(int e,int f)
    {
        
        if(e==1)
        {
            return f;
        }
        else if(f==1||f==0)
        {
            return f;
        }
        if(c[f][e]!=-1)
        {
            return c[f][e];
        }
        int mn=INT_MAX;
        for(int i=1;i<=f;i++)
        {
            int temp=1+max(sol(e-1,i-1),sol(e,f-i));
            mn=min(temp,mn);
        }
        return c[f][e]=mn;
        
    }
        int twoEggDrop(int n) {
        c=vector<vector<int>> (n+1,vector<int>(3,-1));
        return sol(2,n);
    }
};