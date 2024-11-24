class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow compared to (left + right) / 2

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Narrow down to the right half
        } else {
            right = mid - 1; // Narrow down to the left half
        }
    }

    return -1; // Target not found
    }
};