class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>row(9);
        vector<set<char>>col(9);
        vector<set<char>>square(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(row[i].find(board[i][j])==row[i].end()){
                    row[i].insert(board[i][j]);
                }else{
                    return 0;
                }
                if(col[j].find(board[i][j])==col[j].end()){
                    col[j].insert(board[i][j]);
                }else{
                    return 0;
                }
                if(square[(i/3)*3+(j/3)].find(board[i][j])==square[(i/3)*3+(j/3)].end()){
                    square[(i/3)*3+(j/3)].insert(board[i][j]);
                }else{
                    return 0;
                }

            }
        }
        return 1;
    }
};
