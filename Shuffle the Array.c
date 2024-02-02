

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int *a,i,j=n,k;

a=malloc(sizeof(int)*numsSize);
*returnSize=numsSize;
for(i=0,k=0;i<numsSize;k++,j++)
{
 a[i++]=nums[k];
a[i++]=nums[j];
}
return a;
}
