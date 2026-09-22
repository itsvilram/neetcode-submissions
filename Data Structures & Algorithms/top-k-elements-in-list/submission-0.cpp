class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;  
        }
       priority_queue<pair<int,int>> pq; 
       for(auto & m:mp){
         pq.push({m.second,m.first});
       }       
       while(k>0){
        ans.push_back(pq.top().second);
          pq.pop();
          k--;
       }
       return ans;
    }
};
