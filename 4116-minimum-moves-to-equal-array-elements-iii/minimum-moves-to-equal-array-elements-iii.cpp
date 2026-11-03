class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max =nums[0];
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(max<nums[i]){
                max = nums[i];
            }
        }
        int count =0;
        for(int i =0;i<n ;i++){
            count+=max-nums[i];
            nums[i]=max;
        }
        return count;
    }
};