class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> m1, m2;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            m2[t[i]]++;
        }
        for(auto i:m1)
        {
            if(m1 == m2)
            {
                return true;
            }
        }
        return false;
    }
};
