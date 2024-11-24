class Solution {
public:
    int maxDepth(string s) {
        int max_depth=0,left=0,right=0;
        for(int i=0;i<s.length();i++){
            if (s[i]=='('){
                left++;
            }
            if(s[i]==')'){
                right++;
            }
            max_depth=max(max_depth,left-right);
        }
        return max_depth;
    }
};