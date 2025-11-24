
int countWhileMerge(long* sums, int start, int end, int lower, int upper) {
    if (end - start <= 1) return 0;
    int mid = (start + end) / 2;
    int count = countWhileMerge(sums, start, mid, lower, upper) +
                countWhileMerge(sums, mid, end, lower, upper);

    int j = mid, k = mid, t = mid;
    long* cache = (long*)malloc(sizeof(long) * (end - start));
    int r = 0;

    for (int i = start; i < mid; i++) {
        while (k < end && sums[k] - sums[i] < lower) k++;
        while (j < end && sums[j] - sums[i] <= upper) j++;
        count += j - k;

        while (t < end && sums[t] < sums[i]) cache[r++] = sums[t++];
        cache[r++] = sums[i];
    }

    for (int i = 0; i < r; i++)
        sums[start + i] = cache[i];

    free(cache);
    return count;
}

int countRangeSum(int* nums, int numsSize, int lower, int upper) {
    long* sums = (long*)malloc(sizeof(long) * (numsSize + 1));
    sums[0] = 0;
    for (int i = 0; i < numsSize; i++)
        sums[i + 1] = sums[i] + nums[i];

    int result = countWhileMerge(sums, 0, numsSize + 1, lower, upper);
    free(sums);
    return result;
}
