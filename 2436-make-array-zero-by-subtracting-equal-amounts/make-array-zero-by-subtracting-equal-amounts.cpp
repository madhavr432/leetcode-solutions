class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n =nums.size();
        int count =0;
        vector<int>vec(n,0);
        while(nums!=vec){
            count++;
            int smallest = INT_MAX;
            for(int i =0;i<n;i++){
                if(smallest>nums[i]&& nums[i]!=0){
                    smallest = nums[i];
                }
            }
            for(int i =0;i<n;i++){
                if(nums[i]>=smallest){
                    nums[i]-=smallest;
                }
            }
        }
        return count;
    }
};