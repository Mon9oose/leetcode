class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int value = nums[0];
        for (int i = 1 ; i < nums.size() ; ++i)
        {
            if (value == nums[i]) continue;
            
            nums[index++] = nums[i];
            value = nums[i];
        }
        return index;
    }
};