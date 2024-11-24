class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Narrow to the right half
        } else {
            right = mid - 1; // Narrow to the left half
        }
    }

    // If not found, return the position where it should be inserted
    return left;
    }
};