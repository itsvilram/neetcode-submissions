class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
         vector<int> s1(26,0);
         vector<int> s2(26,0);
         for(int i=0 ;i<s.size();i++){
            s1[s[i]-97]++;
            s2[t[i]-97]++;
         }

         for(int i=0;i<26;i++){
            if(s1[i] != s2[i]){
                return false;
            }
         }
         return true;



    }
};
