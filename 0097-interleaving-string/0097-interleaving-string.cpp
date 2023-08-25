class Solution {
private:
    bool solve(int i, int j, int k, string &s1, string &s2, string &s3,vector<vector<int>> &dp){
        if(i == s1.length() && j == s2.length() && k == s3.length()){
            return true;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        bool x = false, y = false;
        if(i != s1.length()){
            if(s1[i] == s3[k]){
                x = solve(i+1,j,k+1,s1,s2,s3,dp);
            }
        }
        if(j != s2.length()){
            if(s2[j] == s3[k]){
                y = solve(i,j+1,k+1,s1,s2,s3,dp);
            }
        }
        return dp[i][j] = x || y;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int i = 0;
        int j = 0;
        int k = 0;

        return solve(i,j,k,s1,s2,s3,dp);
    }
};