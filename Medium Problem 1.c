int findDuplicate(int* nums, int numsSize) {
    int duplicate_number=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                duplicate_number=nums[i];
            }
        }
    }
    return duplicate_number;
}

