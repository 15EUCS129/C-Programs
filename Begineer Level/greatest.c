#include <stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=b && b>=c)
{
printf("a is greater");
}
if(b>=a && b>=c)
{
    printf("b is greater");
    
}
if(c>=b && c>=a)
{
    printf("c is greater");
}
}
