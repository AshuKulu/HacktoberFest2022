class Solution{
public:	

    int recur(int i, int*arr, vector<int>&dp)
    {
        dp[0] = arr[0];
        if(i<0) return 0;
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int pick = arr[i] + recur(i-2, arr, dp);
        int nonpick = 0 + recur(i-1,arr, dp);
        return dp[i] = max(pick, nonpick);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    // step 1
	    vector<int>dp(n,-1);
	    dp[0]= arr[0];
	  
	    for(int i =1; i<n; i++)
	    {
	        int pick = arr[i];
	        if(i>1)
	        {
	            pick+=dp[i-2];
	        }
	        int nonpick  = 0 + dp[i-1];
	        dp[i]= max(pick, nonpick);
	    }
	    return dp[n-1];
	   // return recur(n-1, arr, dp);
	}
};
