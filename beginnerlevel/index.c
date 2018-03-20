#include<stdio.h>
void main()
{
int n,i;
printf("enter no of values");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    printf("%d%d\n",a[i],i);
}

}
