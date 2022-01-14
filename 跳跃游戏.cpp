class Solution {
public:
    bool canJump(vector<int>& nums) {
        int far = 0;
        int n = nums.size();
        for(int i = 0;i < n-1;++i){
            far = max(nums[i]+i,far);
            if(far <= i)
                return false;
        }
        return far >= (n - 1);
    }
};
