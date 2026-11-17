class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int, int>m;
        for(int i =0;i<n;i++){
            int sub = target-nums[i];
            
            if(m.find(sub) !=m.end()){
                return{m[sub], i};
            }
            else{
                m[nums[i]]=i;
            }
        }
        return {}; 
    }
};