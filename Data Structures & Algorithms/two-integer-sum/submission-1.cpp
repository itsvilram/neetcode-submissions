class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;

        }
        for(int i=0;i<nums.size();i++){
            int check = target-nums[i];
           if(mp.count(check) && mp[check] != i){
              if(i<=mp[target-nums[i]]){
              ans.push_back(i);
              ans.push_back(mp[target-nums[i]]);
              }
              else{
              ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
              }
              break;
           }
        }
        return ans;
        
    }
};
