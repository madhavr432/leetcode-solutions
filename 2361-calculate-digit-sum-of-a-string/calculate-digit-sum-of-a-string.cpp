class Solution {
public:
    string digitSum(string s, int k) {
            string str = "";
        
        while(s.length()>k){
            int n = s.length();
            str = "";
            int count =0;
            int sum =0;
            for(int i =0;i<n;i++){
                
                if(count<k){
                    sum+=s[i]- '0';
                    count++;
                }
                if(count==k||i==n-1){
                    count=0;
                    str= str+to_string(sum);
                    sum =0;
                }
            }
            s= str;
            str = "";

        }
        return s;
    }
};