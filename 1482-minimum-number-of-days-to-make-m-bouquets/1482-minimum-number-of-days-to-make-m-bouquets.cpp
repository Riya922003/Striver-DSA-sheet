class Solution {
public:
    bool possible(vector<int>&bloomDay ,int day , int m, int k){
        int n=bloomDay.size();
        int cnt=0;
        int b=0;
        for(int i=0 ; i<n ; i++){
            if (bloomDay[i]<=day){
                 cnt++;
            }
            else{
                b+=cnt/k;
                cnt=0;
            }
        }
         b += (cnt / k);
         return b >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size(); //size of the array
        if (val > n) return -1; //impossible case.
        //find maximum and minimum:
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
    }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       return low; 
    }
};