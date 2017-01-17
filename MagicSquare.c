#include stdio.h
int main (void)
{
int i,x,y,n=1,p;
int nx,ny;next x,y
int a[100][100];
printf (making magic square, input odd numbern);
scanf (%d,&i);
for(y=0;yi;y++)
{
for(x=0;xi;x++)
{
a[y][x]=0;initiallize (put 0)
}
}

x=0,y=i2;set starting point
a[y][x]=n;

	while (n=ii)
	{
	a[y][x]=n;input number at the coordinate
	nx=x-1;
	ny=y-1;moving left upper
		if(ny0)
			ny=i-1;
		if(nx0)
			nx=i-1;//when it goes out of square's boundary
				if (a[ny][nx]!=0)
					x++;if there already exist number
				else{
					x=nx,y=ny;}
	n++;
	}

	for (y=0;yi;y++)print
	{
	for (x=0;xi;x++)
	{
	printf (%4d,a[x][y]);
	}
	printf(nn);margin
	}

scanf (%d,&p);
}
