#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
	printf("computer holds an integer 0-50, you will guess it \n");
	int number,usernum,i;
	srand(time(NULL));
	number= rand()%50;
	for(i=1;i<=3;i++)
	{
		printf("what was the generated integer? please type  ");
		scanf("%d",&usernum);
		if(usernum>50)
		{printf("wrong entry ! Enter again. \n"); 
		scanf("%d",&usernum);
		}
		if(usernum==number)
		{
			printf("correct...\n"); 
			return 0;
		}
		else if(usernum>number)
		printf("wrong..down \n",number);
		else
		printf("wrong...up \n");
	}
	printf("number of your correct answers is %d \n",number);
	
	return 0;
}
