int numIdenticalPairs(int* nums, int numsSize) {
int i,j,c;
    for(i=0,c=0;i<numsSize;i++)
    for(j=i+1;j<numsSize;j++)
    {
        if(nums[i]==nums[j])
            c++;
    }
    return c;
}
