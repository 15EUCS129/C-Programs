#include<stdio.h>
int global = 100;          // global variable declared
void func1();
void main()
{   
int local = 10;         // local variable declared   
printf("Global variable is %d",global);   
printf("Local variable is %d",local);   
func1();
}
void func1()
{   
printf("golbal inside func1 is %d",global);  // Would print the global variable successfully.
}
