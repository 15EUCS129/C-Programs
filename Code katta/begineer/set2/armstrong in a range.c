#include <stdio.h>
#include<math.h>
int main(void) {
int n,m;
scanf("%d %d",&n,&m);
for(int i=n;i<m;i++)
{
	int t,reminder,sum=0;
	t=i;
	while(t!=0)
	{
	reminder=t%10;
	sum=sum+reminder*reminder*reminder;
	t=t/10;
	}
	if(sum==i)
	{
		printf("%d\n",sum);
 
	}
	else
	continue;
}
 
	return 0;
}
