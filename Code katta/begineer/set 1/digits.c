#include <stdio.h>

int main()
{
    int n,r,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        a=a+1;
    }
    printf("%d",a);
    
}
