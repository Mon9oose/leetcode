class Solution
{
public:
    int romanToInt(string s)
    {
        std::map<char, int> resolver = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        if (s.length() == 1)
            return resolver[s[0]];

        int result = 0;
        int previous = 0;
        for (const auto data : s)
        {
            if (previous == 0)
            {
                previous = resolver[data];
                continue;
            }

            if (previous >= resolver[data])
            {
                result += previous;
                previous = resolver[data];
            }
            else
            {
                result += resolver[data] - previous;
                previous = 0;
            }
        }
        result += previous;

        return result;
    }
};