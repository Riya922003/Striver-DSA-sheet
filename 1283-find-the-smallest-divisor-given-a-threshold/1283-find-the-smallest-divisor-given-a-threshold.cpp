class Solution {
public:
    // Optimized division function
    int division(const vector<int>& nums, int divisor) {
        int count = 0;
        for (int num : nums) {
            count += (num + divisor - 1) / divisor;  // Avoid using ceil()
        }
        return count;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());  // Maximum value in nums
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // Correct midpoint calculation

            if (division(nums, mid) <= threshold) {
                right = mid - 1;  // Try a smaller divisor
            } else {
                left = mid + 1;  // Try a larger divisor
            }
        }
        return left;  // The smallest divisor
    }
};
