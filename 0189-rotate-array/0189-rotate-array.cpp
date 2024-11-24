class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newnums;
        k=k%nums.size();
        for (int i=nums.size()-k ; i<nums.size();i++){
            newnums.push_back(nums[i]);
        }
        for (int i=0 ; i<nums.size()-k;i++){
            newnums.push_back(nums[i]);
        }
        nums=newnums;
        
    }
};