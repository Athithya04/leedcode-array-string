/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
int *r,i,s;
r=malloc(sizeof(int)*numsSize);
*returnSize=numsSize;
for(i=0,s=0;i<numsSize;)
{
           s+=nums[i];
           r[i++]=s;
       }
         return r;
}
