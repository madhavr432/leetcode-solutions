class Solution {
public:
    vector<int> evenOddBit(int n) {
        string binary = "";
        while(n>0){
            int bit  = n%2;
            n/=2;
            binary.push_back('0'+bit);
        }
        vector<int>vec;
        int even =0;
        int odd=0;
        for(int i =0;i<binary.length();i++){
            if(binary[i]=='1'){
                if(i%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        vec.push_back(even);
        vec.push_back(odd);
        return vec;
    }
};