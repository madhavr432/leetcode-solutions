class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));
        int i=0;
        int j=1;
        int flag =0;
        grid[0][0]='.';
        if(n == 1) {
            for(int i = 0; i < m; i++) {
                grid[i][0] = '.';
            }
            return grid;
        }
        while(i<m && j<n){
            if(flag ==0 && j!=n){
                flag =1;
                grid[i][j]='.';
                if(i<m-1){
                    i++;
                }
                else{
                    j++;
                }
                
            }
            else if(flag ==1 && i!=m){
                flag =0;
                grid [i][j]='.';
                if(j<n-1){
                    j++;
                }
                else{
                    i++;
                }
            }
            else{
                if(flag ==1){
                    grid[i][j]='.';
                    j++;
                }
                else{
                    grid[i][j]='.';
                    i++;
                }
            }
        }
        return grid;
    }
};