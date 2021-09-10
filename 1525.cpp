class Solution {
public:
    int numSplits(string s) {
        set<char> sf,sb;
        vector<int> v,vb;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            sf.insert(s[i]);
            v.push_back(sf.size());
        }
        for(int i=n-1;i>=0;i--)
        {
            sb.insert(s[i]);
            vb.push_back(sb.size());
        }
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==vb[n-2-i])
            {
                count++;
            }
        }
        return count;
    }
};