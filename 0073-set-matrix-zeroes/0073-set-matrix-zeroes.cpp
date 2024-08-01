class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        unordered_set <int> rows, cols;
        for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
        {
            if(matrix[i][j] == 0)
            {
                rows.insert(i);
                cols.insert(j);
            }
        }

        for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
        {
            if(rows.find(i) != rows.end() or cols.find(j) != cols.end()) matrix[i][j] = 0;
        }
    }
};