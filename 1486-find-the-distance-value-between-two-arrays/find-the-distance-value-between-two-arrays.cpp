class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        
        int count =0;
        for(int i =0;i<n;i++){
            bool hi = true;
            for(int j =0;j<m;j++){
                int sub = arr2[j]-arr1[i];
                if(sub<0){
                    sub = sub*-1;
                }
                if(sub<=d){
                    hi = false ;
                    break;
                }
            }
            if(hi== true){
                count++;
            }
        }
        return count;
    }
};