class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int prev = '{';
        bool found = false;
        for(int i =0;i<letters.size();i++){
            if(letters[i]<prev && letters[i]>target){
                prev = letters[i];
                found = true;
            }
        }
        if(found ==false){
            return letters[0];
        }
        return prev;
    }
};