#include<stdio.h>
int main()
{	
	int side,area,environment;
	printf("This programme find square area and environment \n\n");
	
	printf("pls enter a side : ");
	scanf("%d",&side);
	
	area=side*side;
	environment=side*4;
	
	printf("AREA : %d \n",area);
	printf("ENVIRONMENT : %d",environment);
	
	return 0;
}
