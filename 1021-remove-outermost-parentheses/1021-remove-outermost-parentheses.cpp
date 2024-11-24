class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int count = 0;
        for (char c : s) {
            if (c == '(') {
                if (count > 0) {
                    result += c;
                }
                count++; // Increment the nesting level
            } else if (c == ')') {
                count--; // Decrement the nesting level
                if (count > 0) { // If it's not the outermost closing parenthesis
                    result += c;
                }
            }
        }
        return result;  
    }
};
