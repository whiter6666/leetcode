class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 0)
            return {};
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        int n = intervals.size() ;
        res.push_back({intervals[0][0],intervals[0][1]});
        for(int i = 1;i < n;++i){
            if(intervals[i][0] > res.back()[1])
                res.push_back({intervals[i][0],intervals[i][1]});
            else
                res.back()[1] = max(res.back()[1],intervals[i][1]);
        }
        return res;
    }
};
