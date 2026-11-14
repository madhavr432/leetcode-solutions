class Solution {
public:
    string removeOuterParentheses(string s) {
        string str= "";
        if(s==""){
            return "";
        }
        int d=0;
        for(int i =0;i<s.length();i++){
            
            if(s[i]=='('){
                if(d>0){
                    str+=s[i];

                }
                d++;
            }
            else{
                d--;
                if(d>0){
                    str+=s[i];
                }
            }
        }
        return str;
    }
};