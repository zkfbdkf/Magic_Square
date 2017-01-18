#pragma warning(disable: 4996 )

#include <stdio.h>
int main(void)
{
	int input, x, y, num = 1;
	int nx, ny;//next x and y place
	int a[100][100];
	printf("input odd number to make magic square:\n");	scanf("%d", &input);
	for (y = 0; y<input; y++)
	{
		for (x = 0; x<input; x++)
		{
			a[y][x] = 0;//initiallize (input 0)
		}
	}

	x = 0, y = input / 2;//set first coordinate
	a[y][x] = num;

	while (num <= input*input)
	{
		a[y][x] = num;//input number at coordinate
		nx = x - 1;
		ny = y - 1;//moving left upper
		if (ny<0)
			ny = input - 1;
		if (nx<0)
			nx = input - 1;//when it goes out of boundary
		if (a[ny][nx] != 0)
			x++;//already has number
		else{
			x = nx, y = ny;//set next coordinate
		}
		num++;//increasing by 1
	}

	for (y = 0; y<input; y++)//print out
	{
		for (x = 0; x<input; x++)
		{
			printf("%4d", a[x][y]);
		}
		printf("\n\n");//margin
	}
}
