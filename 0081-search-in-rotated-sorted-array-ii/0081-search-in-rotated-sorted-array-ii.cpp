class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; 
            
            // Check if the target is at the middle
            if (nums[mid] == target) {
                return true;
            }
            
            // Skip duplicates
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }

            // Determine which part is sorted
            if (nums[left] <= nums[mid]) {
                // Left part is sorted
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1; 
                } else {
                    left = mid + 1; 
                }
            } else {
                // Right part is sorted
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1; 
                } else {
                    right = mid - 1; 
                }
            }
        }
        
        return false; 
    }
};
