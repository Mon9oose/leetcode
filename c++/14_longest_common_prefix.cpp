#include <string>
#include <vector>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        auto size = strs.size();
        if (size == 1)
            return strs[0];
        auto firstSize = strs[0].size();

        for (auto j = 0; j < firstSize; ++j)
        {
            char deter = strs[0][j];
            for (auto i = 1; i < size; ++i)
            {
                if (strs[i].size() <= j || strs[i][j] != deter)
                    return std::string(strs[0], 0, j);
            }
        }

        return strs[0];
    }
};