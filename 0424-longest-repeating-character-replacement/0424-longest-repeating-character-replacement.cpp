class Solution {
public:
    int characterReplacement(string s, int k) {
            int mx=0;
        int n=s.length();
        for(char c='A';c<='Z';c++){
            int start=0, i=0, cnt=0;
            for(i=0;i<n;i++){
                if(s[i]!=c){
                    cnt++;   
                }
                while(cnt>k){
                    mx=max(mx,i-start);
                    if(s[start]!=c)cnt--;
                    start++;
                }
            }
            mx=max(mx,i-start);
        }
        return mx;
    
    }
};