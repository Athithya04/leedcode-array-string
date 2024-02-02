int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *a, i;

    a=malloc(sizeof(int)*(numsSize*2));
    *returnSize=2*numsSize;
    for (i = 0; i < numsSize; i++) {
        a[i] =a[i+numsSize]= nums[i];
        
    }
    return a;
}
