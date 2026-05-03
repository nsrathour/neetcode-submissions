class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      set<char>st;
        int l = 0;
        int res = 0;
        for(int r = 0 ; r < s.length() ; r++ ){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l+=1;
            }
            st.insert(s[r]);
            res = max(res , r - l  + 1);
        }
        return res;
    }
};
