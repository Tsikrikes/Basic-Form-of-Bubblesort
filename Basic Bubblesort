#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) 
	{
       
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
             
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;

 
    printf("Give a number for the array: ");
    scanf("%d", &n);

    int array[n];

    
    printf("Give %d numbers\n", n);
    for (int i = 0; i < n; i++) 
	{
		printf("Give a number for the array : ");
        scanf("%d", &array[i]);
    }

    
    printf("Array before Bubblesort : ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");

   
    bubbleSort(array, n);

    
    printf("Array after Bubblesort: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
