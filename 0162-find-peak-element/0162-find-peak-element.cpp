class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Compare mid with its next element
            if (nums[mid] > nums[mid + 1]) {
                // If nums[mid] > nums[mid + 1], peak is on the left side (including mid)
                right = mid;
            } else {
                // If nums[mid] < nums[mid + 1], peak is on the right side
                left = mid + 1;
            }
        }

        // At the end, left == right and points to the peak element
        return left;
    }
    
};

