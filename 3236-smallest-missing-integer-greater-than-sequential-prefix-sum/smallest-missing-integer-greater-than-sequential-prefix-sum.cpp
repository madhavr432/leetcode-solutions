class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n= nums.size();
        int count = 0;
        for(int i =0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
            else{
                break;
            }
        }
        int sum =0;
        for(int i = 0;i<count+1;i++){
            sum+=nums[i];
        }
        int c =5;
        while(c!=0){
            c=0;
            for(int i =0;i<n;i++){
                if(sum==nums[i]){
                    sum+=1;
                    c++;
                    break;
                }
            }
        }
        return sum;
    }
};