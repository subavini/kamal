#include <stdio.h>

int main()
{
int i,num,f=0;
printf("\nenter num:");
scanf("%d",&num);
while(num>0)
{
    num=num/10;
    f=f+1;
}
printf("%d",f);
