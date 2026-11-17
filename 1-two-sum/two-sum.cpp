class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int, int>m;
        for(int i =0;i<n;i++){
            int sub = target-nums[i];
            auto it = m.find(sub);
            if(it !=m.end()){
                return{it->second, i};
            }
            else{
                m[nums[i]]=i;
            }
        }
        return {}; 
    }
};