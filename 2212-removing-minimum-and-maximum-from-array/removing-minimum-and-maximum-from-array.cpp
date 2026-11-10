class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minm=INT_MAX;
        int maxm = INT_MIN;
        int mini =0;
        int maxi=0;
        int n = nums.size();
        if(n==1){
            return 1;
        }
        int count =0;
        for(int i =0;i<n;i++){
            if(nums[i]<minm){
                minm = nums[i];
                mini =i;
            }
            if(nums[i]>maxm){
                maxm = nums[i];
                maxi =i;
            }
        }
        
        int left = min(mini, maxi);
        int right = max(mini, maxi);
        int count1=right+1,count2=n-left,count3=left+1+n-right;
        return min(count1,min(count2,count3));
    }
};