class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int pdt =1;
            int a =n;
            while(a>0){
                int digit =a%10;
                a=a/10;
                pdt *=digit;
            }
            if(pdt%t==0){
                break;
            }
            else{
                n++;
            }
        }
        return n;
    }
};