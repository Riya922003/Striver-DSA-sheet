class Solution {
private:
    int sub(vector<int>& nums, int goal) {
        if (goal < 0) return 0;  // No subarrays can have a negative sum
        int right = 0, left = 0, len = 0, sum = 0;
        while (right < nums.size()) {
            sum += nums[right];
            while (sum > goal) {
                sum -= nums[left];
                left++;
            }
            len += right - left + 1;
            right++;
        }
        return len;
    }

public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if (goal < 0) return 0;  // Handle edge case explicitly
        return sub(nums, goal) - sub(nums, goal - 1);
    }
};
