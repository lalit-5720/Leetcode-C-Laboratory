void moveZeroes(int* nums, int numsSize) {
    int pos = 0;

    // Move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos++] = nums[i];
        }
    }

    // Fill remaining with zeros
    while (pos < numsSize) {
        nums[pos++] = 0;
    }
}