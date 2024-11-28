class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
int low = 0, high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;

        // Check if mid is even or odd
        if (mid % 2 == 0) {
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;  // Move to the right
            } else {
                high = mid;  // Move to the left
            }
        } else {
            if (nums[mid] == nums[mid - 1]) {
                low = mid + 1;  // Move to the right
            } else {
                high = mid;  // Move to the left
            }
        }
    }

    // When low == high, we've found the unique element
    return nums[low];
    }
};