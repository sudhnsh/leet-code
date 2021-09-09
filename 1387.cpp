unordered_map<int,int> c;
class Solution {
public:
    int sol(int x)
    {
        if(x==1)
        {
            return 1;
        }
        else if(x%2==0)
        {
            if(c[x]!=0)
            {
                return c[x];
            }
            return c[x]=1+sol(x/2);
        }
        else
        {
            if(c[x]!=0)
            {
                return c[x];
            }
            return c[x]=1+sol((3*x)+1);
        }
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> p;
        for(int i=lo;i<=hi;i++)
        {
            int ele=sol(i);
            p.push_back(make_pair(ele,i));
        }
        sort(p.begin(),p.end());
        return p[k-1].second;
    }
};