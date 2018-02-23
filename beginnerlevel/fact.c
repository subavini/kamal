#include <stdio.h>
int main()
{
int i,num,f=1;
printf("\nenter a num:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
f=f*i;
}
printf("\nthe factorial is %d",f);
}
