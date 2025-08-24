void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    int temp[numsSize],i;
    if(k<0)
    {
        printf("K is the negative number enter the positive number");
    }
    else
    {
        for(i=0;i<numsSize;i++)
        {
            temp[(i+k)%numsSize]=nums[i];
        }
        for(i=0;i<numsSize;i++)
        {
            nums[i]=temp[i];
        }
        for(i=0;i<numsSize;i++)
        {
            printf("%d ",nums[i]);
        }
        printf("\n");

    }
}