class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> buffer;
        auto numsSize = nums.size();
        for(auto i = 0 ; i < numsSize ; ++i)
        {
            auto determine = target - nums[i];
            if(buffer.count(determine))
                return { buffer[determine], i };
            buffer[nums[i]] = i;
        }
        return {};
    }
};