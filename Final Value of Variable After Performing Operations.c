int finalValueAfterOperations(char** operations, int operationsSize) {
    int x=0;
    int i;
    for(i=0;i<operationsSize;i++)
   {
        if(operations[i][0]=='-')
        {
        --x;
        }
        else if(operations[i][0]=='+')
        {
            ++x;
        }
        else if(operations[i][2]=='-')
        {
        x--;
        }
        else if(operations[i][2]=='+')
        {
            x++;
        }
   }
   return x;
}
