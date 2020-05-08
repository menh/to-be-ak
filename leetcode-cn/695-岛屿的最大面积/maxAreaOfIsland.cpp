/*
从每个岛屿上下左右的走，走过的岛屿变成海
*/

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int iMaxAreas = 0;
        for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[i].size(); ++j)
            {
                if(grid[i][j] == 1)
                {
                    iMaxAreas = max(iMaxAreas, getAreas(i, j, grid));
                }
            }
        }
        return iMaxAreas;
    }
    int getAreas(int i, int j, vector<vector<int>>& grid)
    {
        if(i < 0 || i == grid.size())
        {
            return 0;
        }
        if(j < 0 || j == grid[i].size())
        {
            return 0;
        }
        if(grid[i][j] == 1)
        {
            grid[i][j] = 0;
            return 1 + getAreas(i - 1, j ,grid) + getAreas(i + 1, j ,grid) + getAreas(i, j + 1 ,grid) + getAreas(i, j - 1, grid);
        }
        return 0;
    }
};
