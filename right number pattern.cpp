#include<stdio.h>
//right number pattern
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=4;k>i-1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
