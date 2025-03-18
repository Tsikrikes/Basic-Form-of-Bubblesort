#include <stdio.h>

int meg(int x,int y);
int main()
{
	int x,y;
	printf("Give a number to x: ");
	scanf("%d",&x);
	printf("Give a number to y: ");
	scanf("%d",&y);
	printf("The highest number is : %d\n",meg(x,y));
}
int meg(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

