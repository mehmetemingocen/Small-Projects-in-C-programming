#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("computer holds an integer 0-5,you will guess it\n\n");	
	int number,usernum,i;
	for(i=1;i<5;i++)
	srand(time(NULL));
	number= rand() % 5;
	printf("What was the generated integer? pls type\n\n");
	scanf("%d",&usernum);
	if(usernum==number)
	printf("correct...\n");
	else
	printf("wrong..it was %d \n",number);
	
	return 0;
}
