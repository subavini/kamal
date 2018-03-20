#include <stdio.h>
int main(void)
{
int hr1,hr2,min1,min2,t1,t2;
scanf("%d:%d",&hr1,&min1);
scanf("%d:%d",&hr2,&min2);    
t1=hr1-hr2;
t2=min1-min2;
printf("%d:%d",t1,t2);
}

 
