#include<stdio.h>
//right number pattern
int main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<=5;i++)
	{
		for(k=4;k>i-1;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",ch+j);
		}
		printf("\n");
	}
}
