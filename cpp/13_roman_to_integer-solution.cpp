class Solution
{
public:
    int StoV(char ch)
    {
        if (ch == 'I')
            return 1;
        else if (ch == 'V')
            return 5;
        else if (ch == 'X')
            return 10;
        else if (ch == 'L')
            return 50;
        else if (ch == 'C')
            return 100;
        else if (ch == 'D')
            return 500;
        else
            return 1000;
    }

    int romanToInt(string s)
    {
        int n = s.size();
        int num = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (StoV(s[i]) < StoV(s[i + 1]))
                num -= StoV(s[i]);
            else
                num += StoV(s[i]);
        }

        num += StoV(s[n - 1]);
        return num;
    }
};