#include<stdio.h>
int main()
{
	printf("--calculate average speed--\n\n");
	
	float x,v,t;
	
	printf("pls enter time: ");
	scanf("%f",&t);
	
	printf("pls enter distance: ");
	scanf("%f",&x);
	
	v=x/t;
	
	printf("average speed is %.2f ",v);
	
	return 0;
}
