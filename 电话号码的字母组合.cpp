class Solution {
public:
    vector<string> res;
    string  tmp;
    unordered_map<char,string> keyboard{
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    } ;
     void backtrace(string digits,int pos){
        if(pos == digits.length()){
            res.push_back(tmp);
            return;
        }
        for(char c:keyboard[digits[pos]]){
            tmp.push_back(c);
            backtrace(digits,pos+1);
            tmp.pop_back();
        }
    }
     vector<string> letterCombinations(string digits) {
        if(digits.length() < 1)
            return res;
        backtrace(digits,0);
        return res;
    }
};