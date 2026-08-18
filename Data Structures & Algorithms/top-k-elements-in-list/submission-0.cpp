class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto &i:m)
        {
            freq[i.second].push_back(i.first);
        }
        for(int i=nums.size();i>=1 && ans.size()<k;i--)
        {
            for(int x:freq[i])
            {
                ans.push_back(x);
                if(ans.size() == k)
                {
                    break;
                }
            }
        }
        return ans;
    }
};
