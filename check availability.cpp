/*A small cinema has 3 rows with 3 seats in each row. The booking system marks a seat as 1 if it&#39;s booked
and 0 if it&#39;s available. Find the total number of available seats and list their positions.
Row 1: 1, 0, 1
Row 2: 0, 0, 1
Row 3: 1, 1, 0
Count all available seats and print their row and seat number.*/
#include<stdio.h>
int main()
{
	int check[3][3];
	int i,j;
	int available=0;
	printf("enter the seats status:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&check[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(check[i][j]==0)
			{
				printf("row=%d column=%d",i+1,j+1);
				available++;
			}
			printf("\n");
		}
	}
			printf("available seats=%d\n",available);	
}
