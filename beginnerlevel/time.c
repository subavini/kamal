#include <stdio.h>
int main(void)
{
	int min,hr,sec;
	scanf("%d",&min);
	hr=min/60;
	sec=min-(60*hr);
	printf("%d:%d",hr,sec);
	return 0;
}
