class Solution {
    int m, n;
    
    void dfs(vector<vector<int>>& grid, int row, int col)
    {
        if(min(row, col) < 0 || row>=m || col>=n || grid[row][col])
            return;
        
        grid[row][col]=1;
        
        dfs(grid, row+1, col);
        dfs(grid, row-1, col);
        dfs(grid, row, col+1);
        dfs(grid, row, col-1);
        
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        
        for(int i=0; i<m; i++)
        {
            dfs(grid, 0, i), dfs(grid, m-1, i);
        }
        
        for(int j=0; j<n; j++)
        {
            dfs(grid, j, 0), dfs(grid, j, n-1);
        }
        
        int closedIslands=0;
        
        for(int i=1; i<m-1; i++)
        {
            for(int j=1; j<n-1; j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(grid, i, j), closedIslands++;
                }
            }
        }
        return closedIslands;
    }
};
