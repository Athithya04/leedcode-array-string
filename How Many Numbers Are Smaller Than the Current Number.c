/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
int i,j,c,*r;
r=malloc(sizeof(int)*numsSize);
*returnSize=numsSize;
 for(i=0;i<numsSize;i++)
 {
     for(j=0,c=0;j<numsSize;j++)
     {
         if(nums[i]>nums[j])
         c++;
     }
     r[i]=c;
 }   
 return r;
}
