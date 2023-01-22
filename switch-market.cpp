#include<stdio.h>
int main()
{
	int type,amount,price;
	float total;
	printf("welcome the market ALI \n");
	printf("pls enter type 1 for toys, enter 2 for foods \n");
	scanf("%d",&type);
		printf("pls enter the amount and price values  \n");
		scanf("%d %d",&amount,&price);
		
		switch(type)
		{
			case 1 : total=amount*price;
			printf("you have to pay %.2f TL",total);
			break;
			case 2: if(amount<10) 
			{
				total=amount*price;
				printf("you have to pay %.2f TL",total);
			}
			else if(amount<=100)
			{
				total=amount*price;
				printf("you have to pay %.2f TL",total*0.95);
			}
			else 
			{
				total=amount*price;
				printf("you have to pay %.2f TL",total*0.90);
			}
			break;
			
			default : printf("Wrong type ! \n");
			break;
			
		}

	return 0;
}
