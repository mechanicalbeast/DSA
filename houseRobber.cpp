class Solution {
public:
    int rob(vector<int>& V) {
        int n = V.size();
        vector<int> dp(n, -1);
        for(int i=0; i<n; i++)
        {
            if(i==0) dp[0] = V[0];
            else if(i==1) dp[1] = max(V[0],V[1]);
            else dp[i] = max(V[i] + dp[i-2], dp[i-1]);
        }
        return dp[n-1];
    }
};
