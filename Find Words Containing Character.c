/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int i,j,c=0;
     int *p=malloc(sizeof(int)*c);
for(i=0;i<wordsSize;i++)
{
for(j=0;words[i][j]!=0;j++)
if(words[i][j]==x)                                                                                                                                                                                                              
{
p=realloc(p,(c+1)*sizeof(int));
p[c++]=i;
break;
}
}
*returnSize=c;
return p;
}
