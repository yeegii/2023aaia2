#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,n;
	//yourcode
	//part 1: input a[i][j]
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//part 2: output a[i][j]
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}