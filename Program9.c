#include <stdio.h>
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i+1;s++)
		{
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
