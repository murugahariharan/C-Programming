#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
{
    if(b>=c)
{
    printf("A is the greatest among three \n");
    printf("\n & the ascending order is : %d %d %d",c,b,a);
}
else
{
    printf("\n Ascending order : %d %d %d",b,c,a);
}
}
else if((b>=a)&&(b>=c))
{
    if(a>=c)
{
    printf("B is the greatest among three \n");
    printf("\n & the ascending order is :%d %d %d",c,a,b);
}
else
{
    printf("\n Ascending order : %d %d %d",a,c,b);
}
}
else if((c>=a)&&(c>=b))
{
if(a>=b)
{
    printf("C is the greatest Number \n");
    printf("\n Ascending order : %d %d %d",b,a,c);
}
else
{
    printf("\n Ascending order : %d %d %d",a,b,c);
}
}
}


