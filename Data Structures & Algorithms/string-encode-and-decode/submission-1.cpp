class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto s:strs)
        {
            ans += to_string(s.size())+'#'+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#')
            {
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            ans.push_back(s.substr(j+1, length));
            i = j+length+1;
        }
        return ans;
    }
};
