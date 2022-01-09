class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<int>& candidates,int idx,int target,int sum){
        if(sum == target){
            res.push_back(tmp);
            return;
        }
        if(sum > target)
            return;
        for(int i = idx;i < candidates.size();i++){
            tmp.push_back(candidates[i]);
            sum += candidates[i];
            dfs(candidates,i,target,sum);
            sum -= candidates[i];
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size() == 0)
            return {};
        dfs(candidates,0,target,0);
        return res;
    }
};
