class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long ma = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            ma = max(ma, sum);

            if(sum < 0) {
                sum = 0;
            }
        }

        return ma;
    }
};