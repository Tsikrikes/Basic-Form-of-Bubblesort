#include<stdio.h>
int main()

{
	int x;
    float cost1, cost2;
    
    printf("Enter the number of seconds of speaking : ");
	scanf("%d",&x);  	
	
	cost1= 14 + (x* 0.025);
	
	if (x<=3600) 
	    {
		    cost2= 18 + (x*0.03);
		}
	else if(x>3600)
	    {
	    	cost2= 18 + (x*0.03)+((x-3600)* 0.005);
		}
		 
	printf("Cost of the 1st program: %.2f Euros\n",cost1);
	printf("Cost of the 2nd program: %.2f Euros\n",cost2);
	
	if(cost1<cost2) 
	    {
		    printf("First program is more financial.\n");
	    }
    else if(cost2<cost1) 
		{
		    printf("Second program is more financial.\n");
   	    }
	else
		{
			printf("Both programs are the same.\n");
		}
		
		
		
		return 0;
			
}


