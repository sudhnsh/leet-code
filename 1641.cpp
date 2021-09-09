int g[6][51]={0};
class Solution {
public:
    int sol(int n,char c)
    {
        if(n==1)
        {
            return 1;
        }
        else if(c=='a')
        {
            if(g[1][n])
            {
                return g[1][n];
            }
            return g[1][n]=sol(n-1,'a')+sol(n-1,'e')+sol(n-1,'i')+sol(n-1,'o')+sol(n-1,'u');
        }
        else if(c=='e')
        {
             if(g[2][n])
            {
                return g[2][n];
            }
            return g[2][n]=sol(n-1,'e')+sol(n-1,'i')+sol(n-1,'o')+sol(n-1,'u');
        }
        else if(c=='i')
        {
             if(g[3][n])
            {
                return g[3][n];
            }
            return g[3][n]=sol(n-1,'i')+sol(n-1,'o')+sol(n-1,'u');
        }
        else if(c=='o')
        {
             if(g[4][n])
            {
                return g[4][n];
            }
            return g[4][n]=sol(n-1,'o')+sol(n-1,'u');
        }
        else 
            if(g[5][n])
            {
                return g[5][n];
            }
            return g[5][n]=sol(n-1,'u');
    }
    int countVowelStrings(int n) {
        
        return sol(n,'a')+sol(n,'e')+sol(n,'i')+sol(n,'o')+sol(n,'u');
    }
};