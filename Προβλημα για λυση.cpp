#include <stdio.h>

int main(){
	
	int i;
	double avg=0;
	int x=0;
	float all=0;
	scanf("%d",&x);
	printf("First Income of the week : ");	
	for(i=1; i<=7; i++)
	{
		scanf("%d",&x);
		printf("Income of %d day of the week :",i+1);
		all = all + x;
		avg = all / 7;	
		printf("\n");
	}
	if(avg>300)
	{
		printf("\n");
		printf("The average income is : %.f\n", avg);
		printf("Good Income");
	}
	else if(avg<300)
	{
		printf("\n");
		printf("The average income is : %.f\n", avg);
		printf("Bad Income\n");
	}
	return 0;
}
