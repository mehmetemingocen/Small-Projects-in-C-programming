#include<stdio.h>
int main()
{
	int grade,sum=0,counter=0,max=0;
	float avr;
	printf("this prog calculate the unknown number of grades\n");
	printf("to stop the code enter -1 as grade\n");
	
	printf("enter a grade  ");
	scanf("%d",&grade);
	if(grade>max) 
	{  max=grade;
	}
	
	while(grade!=-1)
	{ 
	sum=sum+grade;
	counter++;
	printf("enter a grade  ");
	scanf("%d",&grade);
	
		if(grade>max) max=grade;

	}
	
	avr=sum/counter;
	printf("average of grades is %.2f\n",avr);
	
	printf("the maximum grade is %d \n",max);
	return 0;
}
