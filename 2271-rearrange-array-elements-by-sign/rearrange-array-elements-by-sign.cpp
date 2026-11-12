class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int p = 0;
        int ne =1;
        vector<int>vec(n);
        for(int i =0;i<n;i++){
            if(nums[i]<0){
                vec[ne]=nums[i];
                ne+=2;
            }
            else{
                vec[p]=nums[i];
                p+=2;
            }
        }
        return vec;
    }
};