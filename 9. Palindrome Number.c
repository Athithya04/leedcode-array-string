bool isPalindrome(long x) {
    long t,r=0;
    
    if(x<0)
    {
    return false;
    }
        for(t=x;t;t/=10)
        {
           
r=r*10 +(t%10);
        }
    return x==r;
}
