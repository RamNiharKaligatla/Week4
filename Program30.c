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
		for(j=0;j<2*n-2*i-1;j++)
		{
			if(j==0||j==2*n-2*i-2)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}