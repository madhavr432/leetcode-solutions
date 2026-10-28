class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag =0;
        int count =0;
        for(int i =s.length()-1;i>=0;i--){
            if(s[i]==' ' && flag ==0){
                continue;
            }
            else if(s[i]==' ' && flag ==1){
                break;
            }
            else{
                flag =1;
                count++;
            }
        }
        return count;
    }
};