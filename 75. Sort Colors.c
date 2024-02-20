void sortColors(int* s, int numsSize) {
    int i,j,k,a;
    /*for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(s[i]>s[j])
            {
            s[i]=s[i]+s[j]-(s[j]=s[i]);    
            }
        }

    }*/
    for(i=0,j=0,k=numsSize-1;j<=k;)
    {
        if(s[j]==0)
        {
            s[i]=s[i]+s[j]-(s[j]=s[i]);
            i++;j++;
        }
    else if(s[j]==1)
    {
        j++;
    }
    else
    {
        s[k]=s[k]^s[j]^(s[j]=s[k]);
        //a=s[j];s[j]=s[k];s[k]=a;
        k--;
    }
    }
    
}
