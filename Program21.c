#include <stdio.h>
int main()
{
	int i,j,n,s;
	scanf("%d",&s);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",s);
		}
		s++;
		printf("\n");
	}
	s-=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d ",s);
		}
		s--;
		printf("\n");
	}
	return 0;
}

