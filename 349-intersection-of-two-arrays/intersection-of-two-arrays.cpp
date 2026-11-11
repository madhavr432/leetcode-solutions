class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        int i =0;
        int j =0;
        while(i<n && j<m){
            if(nums1[i]==nums2[j]&& (vec.empty()||nums1[i]!=vec.back())){
                vec.push_back(nums1[i]);
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
            
        }
        
        return vec;
    }
};