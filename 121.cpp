class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx=0;
        int mn=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn=min(prices[i],mn);
            }
            else 
            {
                mx=max(mx,prices[i]-mn);
            }
        }
        return mx;
    }
};