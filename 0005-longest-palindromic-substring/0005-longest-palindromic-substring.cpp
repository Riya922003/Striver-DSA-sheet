class Solution {
public:
     string expandAroundCenter(const string& s, int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1); 
        }
    string longestPalindrome(string s) {
            if (s.empty()) return "";
            string longest_palindrome = "";
            for (int i = 0; i < s.length(); i++) {
                string odd_palindrome = expandAroundCenter(s, i, i);
                string even_palindrome = expandAroundCenter(s, i, i + 1);
                if (odd_palindrome.length() > longest_palindrome.length()) {
                    longest_palindrome = odd_palindrome;
                }
                if (even_palindrome.length() > longest_palindrome.length()) {
                    longest_palindrome = even_palindrome;
                }
            }
            return longest_palindrome;
        }
};
    