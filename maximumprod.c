int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int temp = maxProd;

        maxProd = nums[i] > nums[i] * maxProd ? nums[i] : nums[i] * maxProd;
        maxProd = maxProd > nums[i] * minProd ? maxProd : nums[i] * minProd;

        minProd = nums[i] < nums[i] * temp ? nums[i] : nums[i] * temp;
        minProd = minProd < nums[i] * minProd ? minProd : nums[i] * minProd;

        if (maxProd > result)
            result = maxProd;
    }

    return result;
    
}