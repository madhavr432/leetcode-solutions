class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        int min= nums[0];
        int max= nums[n-1];
        for(int i =0;i<n;i++){
            if(nums[i]<min){
                min = nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }
        while(min!=max){
            bool found =false;
            for(int i =0;i<n;i++){
                if(min==nums[i]){
                    found =true;
                }
            }
            if(!found){
                res.push_back(min);
            }
            min++;
        }
        return res;
    }
};