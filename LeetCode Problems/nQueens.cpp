class Solution {
    
 public:   
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &lower_diag, vector<int> &upper_diag, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++)
        {
            if(leftRow[row]==0 && lower_diag[row+col]==0 && upper_diag[n-1+col-row]==0)
            {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lower_diag[row+col]=1;
                upper_diag[n-1+col-row]=1;
                solve(col+1, board, ans, leftRow, lower_diag, upper_diag, n);
                board[row][col] = '.';
                leftRow[row] = 0;
                lower_diag[row+col] = 0;
                upper_diag[n-1+col-row] = 0;
            }
                
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n;i++)
        {
            board[i]=s;
        }
        vector<int> leftRow(n,0), lower_diag(2*n-1), upper_diag(2*n-1);
        solve(0, board, ans, leftRow, lower_diag, upper_diag, n);
        return ans;
    }
};
