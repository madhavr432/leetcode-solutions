class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = 0;
        int i =1;
        
        while(ans==0){
            int n = k*i;
            int flag =0;
            i++;
            for(int i =0;i<nums.size();i++){
                if(n==nums[i]){
                    flag =1;
                    break;
                }
            }
            if(flag==0){
                ans = n;
            }
            
        }
        return ans;
    }
};