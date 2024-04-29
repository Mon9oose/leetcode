/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {  
    *returnSize = 2;
    int *res = (int *)malloc(sizeof(int) * 2);
    int i, j;
    for(i = 0 ; i < numsSize ; ++i)
    {
        for(j = i + 1 ; j < numsSize ; ++j)
        {
            if(nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;
            }
        }
    }
    return res;
}