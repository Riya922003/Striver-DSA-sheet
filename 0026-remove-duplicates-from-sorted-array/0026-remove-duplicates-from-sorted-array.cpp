class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1;  // Start with the first element as unique
        for (int i = 1; i < nums.size(); i++) {
            // Check if the current element is different from the last unique element
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];  // Place unique element at position `k`
                k++;  // Increment `k` for the next unique element
            }
        }

        // Optional: Print the unique part of `nums`
        for (int i = 0; i < k; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return k;  // Return the count of unique elements
    }
};
