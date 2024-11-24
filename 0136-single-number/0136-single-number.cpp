class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        for (auto& [key, value] : count) {
            if (value == 1) {
                return key;
            }
        }
        return -1; 
    }
};