class Solution {
public:
    bool helper(vector<int>& nums, int mid, int d) {
        int count = 1, sum = 0;  // Start with 1 day
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > mid) {  // Exceeds the capacity for the current group
                count++;
                sum = nums[i];  // Start a new group
            }
        }
        return count <= d;
    }

    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (helper(nums, mid, days)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
