class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        vector<int> lts(26,0);
        for(int i = 0; i < s.length();i++)
        {
            lts[s[i]-'a']++;
            lts[t[i]-'a']--;
        }

        for(int i = 0 ; i < 26; i++)
        {
            if(lts[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};
