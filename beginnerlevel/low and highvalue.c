#include<stdio.h>
int main()
{
   int a[5],i,j,n,t;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
      if(a[i]<a[j])
      {
   
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
  }
  }
  printf("%d",a[0]);
  printf("%d",a[n-1]);
return 0;
}
