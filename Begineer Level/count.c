#include <stdio.h>

int main()

{
    int a,reminder,count=0;
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        count=count+1;
    }
    printf("%d",count);
}
