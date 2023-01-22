#include<stdio.h>
float r,a,h,x,y,area;
void circle()
{
	printf("enter the value of r ");
		scanf("%f",&r);
		area=3.14*(r*r);
		printf("Circle area is %.2f \n",area);
}
void triangle()
{
	printf("enter the value of a and h ");
		scanf("%f %f",&a,&h);
		area=(a*h)/2;
		printf("triangle area is %.2f \n",area);
}
void rect()
{
	printf("enter the value of x and y ");
		scanf("%f %f",&x,&y);
		area=x*y;
		printf("rectrangle area is %.2f \n",area);
}
int main()
{
		int ch;
		printf(" M E N U \n");
		printf("1- Circle area calculation  \n");
		printf("2- triangle area calculation  \n");
		printf("3- rectrangle area calculation \n");
		printf("  Your Choice :  ");
	    scanf("%d",&ch);
	    
	switch(ch)
	{
		case 1: circle();
		break;
			case 2: triangle();
		break;
			case 3: rect();
		break;
		
		default : printf("WRONG CHOICE !!");
		break;
	}
	return 0;
}
