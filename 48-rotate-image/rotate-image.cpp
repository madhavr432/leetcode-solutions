class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>vec;
        int i =0;
        
        while(i<n){
            int j =i+1;
            while(j<n){
                swap(nums[i][j],nums[j][i]);
                j++;
            }
            i++;
        }
        for(i =0;i<n;i++){
            reverse(nums[i].begin(),nums[i].end());
        }
    }
};