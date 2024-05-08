class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        if (score.size() == 1) return { "Gold Medal" };

        vector<int> origin = score;
        sort(origin.rbegin(), origin.rend());
        std::map<int, int> resolver;
        for(auto i = 0 ; i < origin.size() ; ++i)
        {
            resolver[origin[i]] = i + 1;
        }
        
        vector<string> res;
        for(const auto &n : score)
        {
            int rank = resolver[n];
            if(rank == 1) res.push_back("Gold Medal");
            else if(rank == 2) res.push_back("Silver Medal");
            else if(rank == 3) res.push_back("Bronze Medal");
            else res.push_back(to_string(rank));
        }

        return res;
    }
};