class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>vec;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it :m){
            if(it.second>1){
                vec.push_back(it.first);
            }
        }
        int ans = 0;
        for(int i = 0; i<vec.size();i++){
            ans = ans^vec[i];
        }
        return ans;
    }
};