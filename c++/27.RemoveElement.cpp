class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (val > 50 || nums.size() == 0) return nums.size();
        int begin = 0;
        int rbegin = nums.size() - 1;
        while (begin <= rbegin)
        {
            if (nums[begin] == val && nums[rbegin] != val)
            {
                std::swap(nums[begin++], nums[rbegin--]);
                continue;
            }
            begin = nums[begin] != val ? begin + 1 : begin;
            rbegin = nums[rbegin] == val ? rbegin - 1 : rbegin;
        }
        return begin;
    }
};