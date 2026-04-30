class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i = 0 ; i < nums.size() ; i++ ){
            int a = nums[i];
            if(a > 0)break;
            if(i > 0 && nums[i] == nums[i - 1])continue;
            int l= i  +1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = a + nums[l] + nums[r];
                if(sum > 0){
                    r--;
                }else if(sum < 0){
                    l++;
                }else{
                    v.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(i < r && nums[l] == nums[l - 1])l++;
                }
                
            }
        }
        return v;
    }
};
