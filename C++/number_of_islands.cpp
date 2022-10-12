/*A Graph question where we have to count the no of islands present in the input.
The no of connected components present in the graph is the no of islands present in the grid.

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
*/
//code ->
//the function which calls dfs function, does the work and returns the output.
int numIslands(vector<vector<char>>& grid) {
        //to check 
        int n = 0;//islands count
        for(int i=0;i< grid.size();i++){
            for(int j=0;j< grid[0].size();j++){
                //performing DFS if its not visited
                if(grid[i][j]=='1'){
                    n++;
                    DFS(i,j,grid);
                }
            }
        }
        return n;
    }
    void DFS(int r,int c,vector<vector<char>>& grid){
        //preventing crossing boundaries by checking
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size()){
            return;
        }
        //returning if the cuurent position is already visited
        if(grid[r][c]=='0'){
            return;
        }
        //marking the unvisited vertex as visited
        grid[r][c] = '0';
        //moving in all 4 directions and visiting them recursively
        DFS(r+1,c,grid);
        DFS(r,c-1,grid);
        DFS(r-1,c,grid);
        DFS(r,c+1,grid);
    }
