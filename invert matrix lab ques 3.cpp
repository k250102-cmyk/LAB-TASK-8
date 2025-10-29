/*Question 3:
Create a program that works with a small 4x4 black and white image. The program should:
Create an original image where 1 represents white pixels and 0 represents black pixels
Display the original image
Create an inverted version (negative) of the image where white becomes black and black becomes white
Display both images side by side
Count how many white pixels are in the original image

October 23, 2025 Lab 08 –Nested Loop and Multidimensional Array
Student Name: ___________________________ Roll No: ________________ Section: BAI-1B

Prepared By: Miss Izzah Salam | Programming Fundamentals Lab 2
Original Image 4x4:
{1, 0, 1, 0},
{0, 1, 0, 1},
{1, 1, 0, 0},
{0, 0, 1, 1}*/
#include<stdio.h>
int main()
{
	int img[4][4];
	int i,j;
	//original matrix
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&img[i][j]);
		}
		printf("\n");
	}
	//alternation
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			img[i][j] = (img[i][j] == 0) ? 1 : 0;
            printf("%d ", img[i][j]);
			}
			printf("\n");
		}
	}

	


