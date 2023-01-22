#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("computer holds an integer 0-10,you will guess it\n\n");
	int number,usernum;
	srand(time(NULL));
	number= rand() % 10;
	printf("What was the generated integer? pls type\n\n");
	scanf("%d",&usernum);
	
	if(usernum==number)
	printf("correct...\n");
	else
	printf("wrong..it was %d \n",number);
	
	return 0;
}
