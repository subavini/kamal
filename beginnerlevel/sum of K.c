#include <stdio.h>

int main()
{
int i,j,k,m;
char a[]={1,2,3,4,5};
printf("\nenter num:");
scanf("%d%d",&i,&j);
for(k=0;k<j;k++)
{
m=m+a[k];
}
printf("%d",m);
}

