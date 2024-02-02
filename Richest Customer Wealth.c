int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
   int i,j,s,max=0; 
for(i=0;i<accountsSize;i++)
{
for(j=0,s=0;j<*accountsColSize;j++)
{
        s+=accounts[i][j];
}
if(s>max)
{
max=s;
}
}
return max;
}
