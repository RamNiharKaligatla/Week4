#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=4;i>=0;i--)
	{
		for(j=i;j<n;j++)
		{
			printf("%c ",65+j);
		}
		printf("\n");
	}
	return 0;
}
