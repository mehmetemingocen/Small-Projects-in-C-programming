#include<stdio.h>
int main()
{
	int a,b,c;
	char operation;
	printf("enter the operation and values of a and b ");
	scanf("%c %d %d",&operation,&a,&b);
	
//	printf("enter the operation type ");
//	scanf("%c",&operation);
	
	switch(operation)
	{
		case'+' : c=a+b;
		printf("%d %c %d = %d\n",a,operation,b,c);
		break;
			case'-' : c=a-b;
		printf("%d %c %d = %d\n",a,operation,b,c);
				break;

			case'*' : c=a*b;
		printf("%d %c %d = %d\n",a,operation,b,c);
				break;

			case'/' : c=a/b;
		printf("%d %c %d = %d\n",a,operation,b,c);
				break;

		default : printf("Invalid operation type \n");
		break;
		
	}
	return 0;
}
