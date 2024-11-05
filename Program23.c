#include <stdio.h>
int main()
{
	int i,j,n,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<7;j++)
			{
				if(j==6)
				{
					c++;
					printf("%d",c);
				}
				else
				{
					printf("%d",c);
				}
			}
			printf("\n");
		}
		else
		{
			for(j=0;j<7;j++)
			{
				if(j==0)
				{
					c++;
					printf("%d",c);
				}
				else
				{
					int d=c-1;
					printf("%d",d);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
