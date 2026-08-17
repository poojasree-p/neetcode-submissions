class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> m;
        for(string s:strs)
        {
            vector<int> freq(26, 0);
            for(char c:s)
            { 
                freq[c-'a']++;
            }
            m[freq].push_back(s);
        }
        for(auto &it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
