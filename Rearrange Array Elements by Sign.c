/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {

   int *r,i,j=0,k=1;
   *returnSize=numsSize;
   r=malloc(sizeof(int)*numsSize);

   for(i=0;i<numsSize;i++)
   {
       if(nums[i]>0)
       {
           r[j]=nums[i];
           j+=2;
       }
       else
       {
           r[k]=nums[i];
           k+=2;
       }
   }
return r;
}
