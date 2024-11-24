class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // If the array is empty, return an empty string

    string prefix = strs[0]; // Assume the first string is the common prefix
    for (int i = 1; i < strs.size(); i++) {
        // Compare the prefix with each string
        while (strs[i].find(prefix) != 0) { 
            // If the current prefix is not a prefix of strs[i], reduce it
            prefix = prefix.substr(0, prefix.length() - 1); 
            if (prefix.empty()) return ""; // If prefix becomes empty, no common prefix exists
        }
    }
    return prefix; // Return the longest common prefix
       
    }
};