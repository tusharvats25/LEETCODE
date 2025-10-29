class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int, bool> x, y;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    x[i] = true; y[j] = true;
                }
            }
        }
        for (int a = 0; a < matrix.size(); a++) {
            for (int b = 0; b < matrix[0].size(); b++) {
                if (x[a] == true or y[b] == true) matrix[a][b] = 0;
            }
        }
    }
};


// unordered_set<int> x,y;
//         for(int i = 0; i < matrix.size(); i++)
//             for(int j = 0; j < matrix[0].size(); j++)
//                 if(matrix[i][j] == 0){
//                     x.insert(i); y.insert(j);
//                 }
        
//         for(int i = 0; i < matrix.size(); i++)
//             for(int j = 0; j < matrix[0].size(); j++)
//                 if((x.find(i) != x.end()) || (y.find(j) != y.end())) 
//                     matrix[i][j] = 0;