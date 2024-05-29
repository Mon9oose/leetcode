class Solution {
public:
    int lengthOfLastWord(string s) {
	    int res = 0;
	    for(auto it = s.rbegin() ; it != s.rend() ; it++)
	    {
		    if (*it == ' ' && res == 0) continue;
		    if (*it == ' ' && res != 0) break;
		    res++;
	    }
	    return res;
    }
};
