class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i = 0 ; i < strs.size() ; i++ ){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>v;
        for(auto& pair : mp){
            v.push_back(pair.second);
        }
        return v;

    }
};
