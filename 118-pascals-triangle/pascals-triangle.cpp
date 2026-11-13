class Solution {
public:
    
    vector<vector<int>> generate(int n) {
        vector<vector <int>> vec;
        
        for(int r =0;r<n;r++){
            vector<int>row;
            int prev = r;
            long long int curr =1;
            for(int i =0;i<=r;i++){
                if(i==0||i==r){
                    row.push_back(1);
                }
                else{
                    curr*=prev;
                    curr/=i;
                    row.push_back(curr);
                    prev--;
                    
                }
            }
            vec.push_back(row);

        }
        return vec;
    }
};