#include <stdio.h>
int main()
{
    int a, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(i=2; i<=n/2; ++i)
    {
       
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("yes",a);
    else
        printf("no",a);
    
    return 0;
}
