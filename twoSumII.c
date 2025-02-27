/*
输入一个递增排序的数组和一个数字s，在数组中查找两个数，使得它们的和正好是s。如果有多对数字的和等于s，则输出任意一对即可。
输入：nums = [2,7,11,15], target = 9
输出：[2,7] 或者 [7,2]

输入：nums = [10,26,30,31,47,60], target = 40
输出：[10,30] 或者 [30,10]
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ret = malloc(sizeof(int) * 2);
    int left = 0;
    int right = numsSize - 1;
    while(left <= right)
    {
        int s = nums[left] + nums[right];
        if(target > s)
            ++left;
        else if(target < s)
            --right;
        else
            break;
    }
    ret[0] = nums[left];
    ret[1] = nums[right];
    return ret;
}
