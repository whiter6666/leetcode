class Solution {
public:
    int menory[100][100];
    int uniquePaths(int m, int n) {
        return dp(m-1,n-1);
    }
    int dp(int x,int y){
        if(x == 0 && y == 0)
            return 1;
        if(x < 0 || y < 0 )
            return 0;
        if(menory[x][y] > 0)
            return menory[x][y];
        menory[x][y] = dp(x-1,y)+dp(x,y-1);
        return menory[x][y];
    }
};
