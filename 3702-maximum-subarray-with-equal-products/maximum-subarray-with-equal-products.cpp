class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int lcm(int a, int b) {
        if (a == 0 || b == 0) return 0;
        return (a / gcd(a, b)) * b; 
    }
    int maxLength(vector<int>& nums) {
        int max = 0;
        
        for(int i =0;i<nums.size();i++){
            long long g = nums[i], l = nums[i], mul = nums[i];
            int count =1;
            for(int j = i+1;j<nums.size();j++){
                g = gcd(g,nums[j]);
                l = lcm(l,nums[j]);
                mul =mul*nums[j];
                if(mul==(g*l)){
                    count++;
                }
                else{
                    break;
                }
            }
            if(max<count)max=count;
        }
        
        return max;
        
    }
};