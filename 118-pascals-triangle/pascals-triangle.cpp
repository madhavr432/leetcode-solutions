class Solution {
public:
    int ncr(int r, int c) {
        int res =1;
        for(int i =0;i<c-1;i++){
            res*=(r-1-i);
            res/=i+1;
        }
        return res;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> vec;
        
        for(int r =1;r<=n;r++){
            vector<int>row;
            for(int c=1;c<=r;c++){
                int res = ncr(r,c);
                row.push_back(res);
            }
            vec.push_back(row);

        }
        return vec;
    }
};