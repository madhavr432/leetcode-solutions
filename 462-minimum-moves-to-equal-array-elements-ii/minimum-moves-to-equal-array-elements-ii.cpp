class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mid;
        int count =0;
        mid = n/2;
        for(int i =0;i<n ;i++){
            if(nums[i]>nums[mid]){
                count+=nums[i]-nums[mid];
                nums[i]=nums[mid];
            }
            else if(nums[i]<nums[mid]){
                count+=nums[mid]-nums[i];
                nums[i]=nums[mid];
            }
        }
        return count;
    }
};