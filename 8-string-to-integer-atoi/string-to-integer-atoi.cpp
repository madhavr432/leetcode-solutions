class Solution {
public:
    int myAtoi(string s) {
        int nums =0;
        int op = 1;
        bool found = false;
        for(int i = 0;i<s.length();i++){
            if(s[i]==' '&& found == false){
                continue;
            }
            else if(s[i]=='-' && found == false){
                found = true;
                op = -1;
            }
            else if(s[i]=='+'&& found == false){
                found = true;
                continue;
            }
            else if(s[i]<='9'&&s[i]>='0'){
                found = true;
                int digit = s[i]-'0';
                if (nums > (INT_MAX - digit) / 10) {
                    return (op == 1) ? INT_MAX : INT_MIN;
                }
                
                nums = nums*10+digit;
            }
            else{
                break;
            }
        }
        return nums*op;
    }
};