class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int> (n));

        if(original.size() != m * n) return {};

        for(int i =0; i < original.size(); i++){
            if(i < n){
                ans[0][i] = original[i];
            }
        }
        int row =1, col =0;
        for(int i = n; i < original.size(); i++){
           ans[row][col] = original[i];
            col++;
           if(col == n){
            col = 0;
            row++;
           }
        }
        return ans;
    }
};