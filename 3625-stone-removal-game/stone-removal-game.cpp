class Solution {
public:
    bool canAliceWin(int n) {
        bool hello = false;
        for(int i =10;i>=0;i--){
            if(n-i>=0 && i%2==0){
                n= n-i;
                hello = true;
            }
            else if(n-i>=0 && i%2==1){
                n= n-i;
                hello = false;
            }
            else{
                break;
            }

        }
        return hello;
    }
};