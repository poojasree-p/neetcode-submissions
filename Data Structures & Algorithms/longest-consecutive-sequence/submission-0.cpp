class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int max_ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int num:s)
        {
            if(s.find(num-1) == s.end())
            {
                int curr_num = num;
                int curr_ans = 1;
                while(s.find(curr_num+1) != s.end())
                {
                    curr_num++;
                    curr_ans++;
                }
                max_ans = max(max_ans, curr_ans);
            }
        }
        return max_ans;
    }
};
