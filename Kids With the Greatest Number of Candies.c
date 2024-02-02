/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i,max=0;
    bool *r=malloc(sizeof(bool)*candiesSize);
    *returnSize=candiesSize;
    for(i=0;i<candiesSize;i++)
    {
      if(candies[i]>max)
          max=candies[i];
    }
    for(i=0;i<candiesSize;i++)
    {
    if((candies[i]+extraCandies)>=max)    
    {
        r[i]=true;
    }
    else
    {
        r[i]=false;
    }
    }
    return r;
    }
