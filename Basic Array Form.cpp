#include <stdio.h>


int main(){
     int array[5]={10,2,3,4,5};
     printf("The elements of the array : \n");
     
     for (int i=0;i<5;i++)
	 {
         printf("array[%d]=%d\n",i,array[i]);
         
     }
     return 0;
}
