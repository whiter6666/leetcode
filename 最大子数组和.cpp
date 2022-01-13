class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        vector<int> dp;
        int m = nums[0];
        dp.push_back(nums[0]);
        for(int i = 1;i < nums.size();++i){
            dp.push_back( max(nums[i],dp[i-1]+nums[i]) );
            if(dp[i] > m)
                m = dp[i];
        }
        return m;
    }
};
