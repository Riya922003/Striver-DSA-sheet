class Solution {
public:
    void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds, int k) {
        // Base case: if target == 0 and we have exactly k numbers in the combination
        if (target == 0 && ds.size() == k) {
            ans.push_back(ds);
            return;
        }
        
        // Stop recursion if index exceeds bounds or the combination size exceeds k
        if (ind >= arr.size() || ds.size() > k) {
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if (arr[i] > target) break; // No point in continuing if the number exceeds the target
            
            ds.push_back(arr[i]); // Include the current number in the combination
            findCombination(i + 1, target - arr[i], arr, ans, ds, k); // Recur with updated target and index
            ds.pop_back(); // Backtrack by removing the last added number
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> sample = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Numbers 1 through 9
        vector<vector<int>> ans; // To store all valid combinations
        vector<int> ds; // Temporary vector to store the current combination
        findCombination(0, n, sample, ans, ds, k);
        return ans;
    }
};
