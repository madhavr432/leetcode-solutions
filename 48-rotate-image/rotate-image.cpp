class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>vec;
        for(int i =0;i<n;i++){
            vector<int>row;
            for(int j =n-1;j>=0;j--){
                row.push_back(nums[j][i]);
            }
            vec.push_back(row);
        }
        nums = vec;
    }
};