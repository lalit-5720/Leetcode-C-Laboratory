bool containsDuplicate(int* nums, int numsSize) {
    int flag=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        return true;
    }
    return false;   
}