int mostWordsFound(char** sentences, int sentencesSize)
{
int i,j,c=0,max=0;
    for(i=0;i<sentencesSize;i++)
    {
        for(j=0,c=0;sentences[i][j];j++)
        {
       if(sentences[i][j]==' ')
        {
            c++;
        }
        }
        if(c>max)
        {
            max=c;
        }
    }
        return max+1;
}
