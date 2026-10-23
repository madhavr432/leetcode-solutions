class Solution {
public:
    vector<int> maxProductPair(vector<int>& arr, int target) {
        int n = arr.size();
        int p=-1,q=-1;
        for(int i =n-1;i>=0;i--){
            for(int j = 0;j<n;j++){
               if(arr[i]+arr[j]==target){
                    if(arr[i] <= arr[j]){
                        continue;
                    }
                    else if((p==-1)||((arr[i]*arr[j])>(arr[p]*arr[q]))){
                        p=i;
                        q=j;
                    }
                }
            }
        }
        return {p,q};
    }
};