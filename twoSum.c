int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numSize; i++){
        for (int j = i+1; j < numSize; j++){
            if ((nums[i]+nums[j])==target)
                return i,j;
        }
    }
}
