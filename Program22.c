#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j<i)
			{
				printf("%d*",i);
			}
			else
			{
				printf("%d",i);
			}
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			if(j<n-i+1)
			{
				printf("%d*",n-i+1);
			}
			else
			{
				printf("%d",n-i+1);
			}
		}
		printf("\n");
	}
	return 0;
}

