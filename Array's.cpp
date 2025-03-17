#include <stdio.h>

void ReverseArray(int array[], int n)
{
	int start = 0;
	int end = n-1;
	
	while (start < end)
	{
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
}
int main()
{
	int array[5]={1,2,3,4,5};
	int n = sizeof(array) / sizeof(array[0]);
	printf("The array's elements are : ");
	for( int i=0; i<n; i++)
	{
		printf("[%d]" ,array[i]);
	}
	ReverseArray(array,n);
	printf("\n");
	printf("The array's elements after the reverse are : ");
	for(int i=0; i<n; i++)
	{
		printf("[%d]", array[i]);
	}
	printf("\n");
	return 0;
}
