class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int max =0;
        for(int i =0;i<n;i++){
            int l = strs[i].length();
            int size =0;
            bool x = true;
            for(int j = 0;j<l;j++){
                if(strs[i][j]>='a' && strs[i][j]<='z'){
                    x = false;
                }
            }
            if(x==true){
                size+= stoi(strs[i]);
            }
            else{
                size = l;
            }
            if(size>max){
                max = size;
            }
        }
        return max;
    }
};