class Solution {
public:
void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds){
    // base case
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind ; i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1]){continue;}
        if(arr[i]>target){break;}
        ds.push_back(arr[i]);//if the arr[i]==target
        findCombination(i + 1, target - arr[i], arr, ans, ds); // calling the recurssive function
        ds.pop_back();
    } 
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
                sort(candidates.begin(), candidates.end()); // to get the sorted array
                  vector < vector < int >> ans;
                  vector < int > ds;
                  findCombination(0, target, candidates, ans, ds);
                  return ans;
    }
};