int rob(int* nums, int numsSize) {
    int robbersums=0;
    if (numsSize==1)
    {
        return nums[0];
    }
    if(numsSize==0)
    {
        return 0;
    }
    if(numsSize==2)
    {
        return nums[0]>nums[1]?nums[0]:nums[1];
    }
    for(int i=0;i<numsSize;i=i+2)
    {
        robbersums=robbersums+nums[i];
    }
    return robbersums;
}