
#include<stdio.h>
int main(void) {
	int i,m;
	char a[10];
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		printf("\t %c",a[i]);
	}
	return 0;
}
