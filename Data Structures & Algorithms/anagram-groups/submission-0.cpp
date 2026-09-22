class Solution {
public:

    bool isAnagrams(string &s1,string &s2){
        vector<int> fs1(26,0);
        vector<int> fs2(26,0);
        if(s1.size()!= s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            fs1[s1[i]-97]++;
            fs2[s2[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(fs1[i] != fs2[i]){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        // for(int i=0;i<strs.size();i++){
        //     vector<string> temp;
        //     for(int j=i+1;j<strs.size();j++){
        //         if(isAnagrams(strs[i],strs[j])){
        //             if(temp.size()==0){
        //             temp.push_back(strs[i]);
        //             }
        //             temp.push_back(strs[j]);
        //         }
        //     }
        //     if(temp.size()==0){
        //         temp.push_back(strs[i]);
        //     }
        //     ans.push_back(temp);

        // }

        map<string,pair<vector<string>,vector<int>>>mp;
         
         for(int i=0;i<strs.size();i++){
            string curr=strs[i];
            sort(curr.begin(),curr.end());
            if (mp.find(curr) != mp.end()){

                 mp[curr].first.push_back(strs[i]);
        mp[curr].second.push_back(i);
            }
            else{
                vector<string> temp;
                vector<int> indexes;
                temp.push_back(strs[i]);
                indexes.push_back(i);
                mp[curr]={temp,indexes};
            }
         }
         for(int i=0;i<strs.size();i++){
            string curr=strs[i];
            sort(curr.begin(),curr.end());
            if (mp.find(curr) != mp.end()){
                int indexmin=mp[curr].second[0]; 
                if(i>indexmin && mp[curr].second.size()>1){
                    continue;
                }
                else{
                    ans.push_back(mp[curr].first);
                }
            }
         }


        return ans;
        
    }
};
