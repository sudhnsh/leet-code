vector<int> c(101,-1);
class Solution {
public:
    int sol(int n)
    {
        if(n==0)
        {
            return c[0]=0;
            }
        else if(n==1)
        {
            return c[1]=1;
        }
        if(n%2==0)
        {
            if(c[n]!=-1)
            {
                return c[n];
            }
            return c[n]=sol(n/2);
            
        }
        else 
        {
            if(c[n]!=-1)
            {
                return c[n];
            }
            return c[n]=sol(n/2)+sol((n/2)+1);
        }
    }
    int getMaximumGenerated(int n) {
        int mx=0;
        for(int i=0;i<n+1;i++)
        {  
          mx=max(sol(i),mx);
         //  cout<<c[i]<<' '<<mx<<'\n';
        } 
        return mx;
    }
};