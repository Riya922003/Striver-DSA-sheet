class Solution {
public:
    int myAtoi(string s) {
       int i = 0, n = s.length();
        long result = 0; // Use long to detect overflow
        int sign = 1;    // Assume positive by default
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Step 4: Check for overflow
            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }
        return (int)(result * sign);  
    }
};