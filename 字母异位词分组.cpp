class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> hash;

        for (string& s:strs)                    //遍历每个单词
        {
            string tmp = s;
            sort(tmp.begin(), tmp.end());       //将当前单词内的字母排序
            hash[tmp].push_back(s);             //将原始单词存入属于它的异位词组中
        }                                       //hash[tmp]表示tmp这组异位词的集合

        for (auto& vec : hash)                  //遍历哈希表，将值存入结果集中
        {
            res.push_back(vec.second);
        }

        return res;
    }
};
