class Solution {
public:
    string largestOddNumber(string num) {
         int count = -1; // Index of the last odd digit
    for (int i = num.length() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) { // Check if the digit is odd
            count = i;
            break;
        }
    }
    if (count == -1) {
        return "";
    }

    return num.substr(0, count + 1);
    }
};