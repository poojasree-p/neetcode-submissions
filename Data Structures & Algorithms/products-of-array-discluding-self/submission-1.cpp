class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int total_product = 1;
        int zero_count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                zero_count++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                total_product *= nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zero_count == 0 )
            {
                ans.push_back(total_product/nums[i]);
            }
            else if(zero_count == 1)
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
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};
