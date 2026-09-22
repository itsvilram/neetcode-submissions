class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        map <int,int> mp;
        for (int i=0;i<nums.size();i++){
            if(mp[nums[i]]){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
            }
         }

       for (int i=0;i<nums.size();i++){
            if(mp[nums[i]]>1){
                return true;
            }
           
         }
         return false;

    }
};