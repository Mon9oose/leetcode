class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x <= 0) return x == 0;
        if (x / 10 == 0) return true;
        auto str = std::to_string(x);
        auto size = str.length();
        size_t i = 0;
        size_t j = size - 1;
        while(i < j) if(str[i++] != str[j--]) return false;
        return true;
    }
};