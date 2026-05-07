class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        set<char>st;
        int len = 0;
        for(int r = 0 ; r < s.length() ; r++ ){
            while(st.find(s[r]) != st.end()){
              st.erase(s[l]);
              l += 1;
            }
            st.insert(s[r]);
            len = max(len , r - l + 1);
        }
        return len;
    }
};
