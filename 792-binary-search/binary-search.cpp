class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st =0;
        int n = nums.size();
        if(n == 1 && nums[0]== target) return 0;
        int end = n-1;
        while(st<=end){
            int mid = (st+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};