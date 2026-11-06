class Solution {
public:
    string dectobin(uint32_t n)
    {
        string ans = "";
        int bit;
        while(n)
        {
            bit = n%2;
            ans.push_back('0'+bit);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int hammingWeight(uint32_t n) {
        string binary = dectobin(n);
        int ans = 0;
        for(int i=0;i<binary.size();i++)
        {
            if(binary[i] == '1')
            {
                ans++;
            }
        }
        return ans;
    }
};
