#include<stdio.h>
int main()
{
    int a[5],n,sum=0,i;
    printf("\nenter num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+1;
    }
    printf("%d",sum);
    return 0;
}
