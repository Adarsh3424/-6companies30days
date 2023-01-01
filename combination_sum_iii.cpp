//LEETCODE 216. COMBINATION SUM III
//TIME COMPLEXITY: O(9^K)
//SPACE COMPLEXITY: O(n)



class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        dfs(k,n,1, arr,ans);
        return ans;
    }
    void dfs(int k, int n, int s, vector<int> &arr, vector<vector<int>> &ans){
        if(k == 0 && n == 0)
        {
            ans.push_back(arr);
            return;
        }
        if(k == 0 || n <= 0)
            return;
        for(int i = s; i <= 9; i++){
            arr.push_back(i);
            dfs(k-1,n-i,i+1,arr,ans);
            arr.pop_back();
        }
    }
};
