class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int> , int>>q;
        vector<vector<int>> visit(n, vector<int>(m, 0));
        int fresh = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    visit[i][j] = 2;
                }
                else{
                    visit[i][j] = 0;
                }
                if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int tm = 0;
        int drow[] = {1,-1,0,0};
        int dcol[] = {0,0,1,-1};

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(tm , t);
            for(int k=0;k<4;k++){
                int nrow = r + drow[k];
                int ncol = c + dcol[k];

                if(nrow>=0&&nrow<n&&
                ncol>=0&&ncol<m&&
                visit[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                    q.push({{nrow,ncol} , t+1});
                    visit[nrow][ncol] = 2;
                    fresh--;
                }
            }
        }
        if(fresh > 0){
            return -1;
        }
        return tm;
    }
};
