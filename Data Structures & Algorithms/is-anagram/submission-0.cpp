class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>map(26,0);
        for(int i=0;i<s.length();i++){
            int idx = s[i]-'a';
            map[idx]++;
        }
        for(int i=0;i<t.length();i++){
            int idx = t[i] - 'a';
            map[idx]--;
        }
        for(int i = 0;i<map.size();i++){
            if(map[i]!=0){
                return false;
            }
        }
        return true;
    }
};
