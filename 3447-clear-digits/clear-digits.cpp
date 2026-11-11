class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        int n = s.length();

        for(int i =0;i<n;i++){
            if(s[i]<='9'&&s[i]>='0'){
                if(st.empty()){
                    continue;
                }
                else{
                    st.pop();
                }
                
            }
            else{
                st.push(s[i]);
            }
        }
        string str = "";
        while(!st.empty()){
            if(st.empty()){
                return str;
            }
            char a = st.top();
            str = a + str;
            st.pop();
        }
        return str;
    }
};