class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min_so_far = prices[0];
        for(int i=0;i<prices.size();i++)
        {
            min_so_far = min(min_so_far, prices[i]);
            ans = max(ans, prices[i]-min_so_far);
        }
        return ans;
    }
};
