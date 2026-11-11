class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int zeros = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                zeros++;
            }
        }
        int total_product = 1;
        if(zeros == 0)
        {
            for(int i=0;i<nums.size();i++)
            {
                total_product *= nums[i];
            }
            for(int i=0;i<nums.size();i++)
            {
                ans.push_back(total_product/nums[i]);
            }
        }
        else if(zeros == 1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] != 0)
                {
                    total_product *= nums[i];
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] != 0)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(total_product);
                }
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};
