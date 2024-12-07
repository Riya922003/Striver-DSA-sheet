class Solution {
    private:
   void backtrack(const string& digits, const vector<string>& mappings, string current, int index, vector<string>& result) {
    // Base case: if we have processed all the digits
    if (index == digits.size()) {
        result.push_back(current);
        return;
    }

    // Get the letters mapped to the current digit
    string letters = mappings[digits[index] - '0'];

    // Iterate through the letters and explore each path
    for (char letter : letters) {
        backtrack(digits, mappings, current + letter, index + 1, result);
    }
}
      
public:
    vector<string> letterCombinations(string digits) {
      if (digits.empty()) return {}; // If no digits, return empty list

    // Map digits to their corresponding letters
    vector<string> mappings = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> result;
    backtrack(digits, mappings, "", 0, result);
    return result;
    }
};