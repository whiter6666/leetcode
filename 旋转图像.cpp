class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tmp;
        //对称交换
        for(int i = 0;i < matrix.size();i++){
            for(int j = i + 1;j < matrix.size();j++){
                tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }
        //每行反转
        for(int i = 0;i < matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
