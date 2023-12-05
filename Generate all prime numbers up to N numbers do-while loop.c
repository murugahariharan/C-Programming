
#include  <stdio.h>
void  main() 
{
    int i,j,n;
    printf("Enter  the number till  which you want prime  numbers \n");
    scanf("%d",&n);
    printf("Prime  numbers are: \n");
    i=2;
    do
    {
        int  c=0;
        for(j=1;j<=i;j++)
    {
        if(i%j==0)
    {
        c++;
    }
    }
    if(c==2)
    {
        printf("%d  ",i);
    }
    i++;
    }
    while(i<=n);
}



