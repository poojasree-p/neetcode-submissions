class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(char &c:s)
        {
            if(isalnum(static_cast<unsigned char> (c)))
            {
                clean += static_cast<char> (tolower(static_cast<unsigned char> (c)));
            }
        }
        for(int i=0;i<clean.size()/2;i++)
        {
            if(clean[i] != clean[clean.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};
