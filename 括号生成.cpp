class Solution {
public:
    vector<string> res;
    string tmp;
    vector<string> generateParenthesis(int n) {
        if(n == 0)
            return {};
        backtrace(n,n);
        return res;
    }
    void backtrace(int left,int right){
        if(left > right)
            return;
        if(left < 0 || right < 0)
            return;
        if(left == 0 && right == 0){
            res.push_back(tmp);
            return;
        }
            
        tmp.push_back('(');
        backtrace(left-1,right);
        tmp.pop_back();
        tmp.push_back(')');
        backtrace(left,right-1);
        tmp.pop_back();
    }
};
