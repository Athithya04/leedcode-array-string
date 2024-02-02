int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
int i,c;
for(i=0,c=0;i<hoursSize;i++)
{
   if(hours[i]>=target)
    {
        c++;
    }
}
return c;
}
