class Solution {
public:
    string dectobin(int n)
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
    int hamming(int n)
    {
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
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(hamming(i));
        }
        return ans;
    }
};
