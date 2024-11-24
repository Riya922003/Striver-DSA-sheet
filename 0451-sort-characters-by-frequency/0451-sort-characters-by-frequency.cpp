class Solution {
public:
    string frequencySort(string s) {
   unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        vector<pair<char, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // Compare by value (frequency)
        });
        string result = "";
        for (const auto& pair : vec) {
            result += string(pair.second, pair.first); // Append 'pair.second' copies of 'pair.first'
        }
        return result;
    }
};