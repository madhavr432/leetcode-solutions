class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        if(n==1) return n;
        if(n==2) return 1 + (nums[0]==nums[1]);
        for(int i=1;i<n-1;++i){
            if((2*nums[i])>=(nums[i+1]+nums[i-1])){
                ++c;
            }
        }
        if(nums[0]>=nums[1]){
            ++c;
        }
        if(nums.back()>=nums[n-2]){
            ++c;
        }
        return c;
    }
};