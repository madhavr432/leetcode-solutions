class Solution {
public:
    string digitSum(string s, int k) {
            string str = s;
        
        while(str.length()>k){
            string a = str;
            int n = str.length();
            str = "";
            int count =0;
            int sum =0;
            for(int i =0;i<n;i++){
                
                if(count<k){
                    sum+=a[i]- '0';
                    count++;
                }
                if(count==k||i==n-1){
                    count=0;
                    str= str+to_string(sum);
                    sum =0;
                }
            }

        }
        return str;
    }
};