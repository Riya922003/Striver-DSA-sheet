class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            return 0;
        }
        for(int i=0 ; i<nums.size()-1 ;i++){
            if(nums[i]+1==nums[i+1]){
                continue;
            }
            else{
                return nums[i]+1;
            }
        }
        return nums[nums.size()-1]+1;
    }
};