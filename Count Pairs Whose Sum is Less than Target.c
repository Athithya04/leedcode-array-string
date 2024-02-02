int countPairs(int* nums, int numsSize, int target){
int i,j,c=0;
for(i=0;i<numsSize;i++)
{
    for(j=i+1;j<numsSize;j++)
    {
        if(nums[i]+nums[j]<target)
        c++;
    }
}
return c;
}
