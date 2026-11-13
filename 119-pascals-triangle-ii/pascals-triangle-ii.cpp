class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>vec;
        int prev= rowIndex;
        long long int curr =1;
        for(int i =0;i<=rowIndex;i++){
            if(i==0||i==rowIndex){
                vec.push_back(1);
            }
            else{
                curr*=prev;
                curr/=i;
                vec.push_back(curr);
                prev--;
                
            }
        }
        return vec;
    }
};