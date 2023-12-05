#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci series:%d,%d,",a,b);
    c= a+b;
    while(c<=n)
    {
        printf("%d,",c);
        a=b;
        b=c;
        c=a+b;
    }
}
        
        
    
    
    


