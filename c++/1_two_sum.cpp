class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto size = nums.size();
        std::vector<int> res;
        for(auto i = 0 ; i < size ; ++i)
        {
            for(auto j = i + 1 ; j < size ; ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};