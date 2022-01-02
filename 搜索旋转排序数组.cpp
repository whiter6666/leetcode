class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = nums.size() / 2;
        int left = 0;
        int right = nums.size()-1;
        if (nums.size() == 1) {
            return nums[0] == target ? 0 : -1;
        }
        if(nums.size() == 2){
            if(nums[0] ==  target)
                return 0;
            else if(nums[1] == target)
                return 1;
            else
                return -1;
        }
        while(left <= right){
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < nums[right]){
                if(nums[mid] < target & nums[right] >= target){
                    left = mid+1;
                    mid = (left + right) / 2;
                }else{
                    right = mid-1;
                    mid = (left + right) / 2;
                }
                
            }else{
                if(nums[mid] > target & nums[left] <= target){
                    right = mid-1;
                    mid = (left + right) / 2;
                }else{
                    left = mid+1;
                    mid = (left + right) / 2;
                }
            }
        }
        return -1;
    }
};
