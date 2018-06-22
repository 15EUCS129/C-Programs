#include <stdio.h>
 
int main(void) 
{
int n,rem,sum=0,res;
printf("\n enter the number:");
scanf("%d",&n);
res=n;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(res==sum)
printf("\n %d is an Armstrong number",res);
else
printf("\n %d is not an Armstrong number",res);
 
 
return 0;
}
