class Solution {
public:
        private: int count(int n){
    int c=0;
    while(n>0){
        c++;
        n=n/2;
    }
    return c;
}
public:
    int minBitFlips(int start, int goal) {
        int n = max(start,goal);
        int mx = count(n);
        int k = start ^ goal;
        int b = __builtin_popcount(k);
        int nOf0 = mx-b;
        return mx-nOf0;
    }
};