class Solution {
public:
    int maxProduct(int n) {
        int lar = -1;
        int seclar = -1;
        while(n>0){
            int digit = n%10;
            if(digit>=lar){
                seclar = lar;
                lar = digit;
            }
            else if(digit>seclar){
                seclar = digit;
            }
            n/=10;
        }
        return lar*seclar;
    }
};