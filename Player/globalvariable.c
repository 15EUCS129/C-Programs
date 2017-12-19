#include<stdio.h>
int count = 100;
void fun();
void main()
{   
int count=10;   
printf("%d",count);           
fun();
if(count>5)
{
int count=50;
printf("\n%d",count);
}
}
void fun()
{
printf("\n%d",count);
}
