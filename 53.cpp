class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++)
        {
            sum=sum+nums[i]>nums[i]?sum+nums[i]:nums[i];
            mx=mx>sum?mx:sum;
            
        }
        return mx;
    }
};