class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if (s.length() != t.length()) return false;
    unordered_map<char, char> sToT; // Maps characters from s to t
    unordered_map<char, char> tToS; // Maps characters from t to s

    for (int i = 0; i < s.length(); i++) {
        char sChar = s[i];
        char tChar = t[i];
        if (sToT.count(sChar) && sToT[sChar] != tChar) {
            return false;
        }
        if (tToS.count(tChar) && tToS[tChar] != sChar) {
            return false;
        }
        sToT[sChar] = tChar;
        tToS[tChar] = sChar;
    }
    return true;
    }
};