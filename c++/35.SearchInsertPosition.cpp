class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0, rbegin = nums.size() - 1;
        while(true)
        {
            int index = (begin + rbegin) / 2;
            if (nums[index] == target) return index;
            // if index stucked..
            if (index == begin) break;
            if (nums[index] < target) begin = index;
            else rbegin = index;
        }
        if (target < nums[begin]) return 0;
        else if (nums[rbegin] < target) return rbegin + 1;
        else return begin + 1;
    }
};