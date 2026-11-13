class Solution {
public:
    vector<int>ncr(int r) {
        long long ans =1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int i =1;i<r;i++){
            ans*=(r-i);
            ans/=i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> vec;
        
        for(int r =1;r<=n;r++){
            
            vec.push_back(ncr(r));

        }
        return vec;
    }
};