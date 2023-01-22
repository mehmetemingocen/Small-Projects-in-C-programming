#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("---calculate grade---\n");
	
	int grade;
	printf("pls enter a grade: ");
	scanf("%d",&grade);
	
	if(grade>100)
	{ printf("WRONG ENTRY... again please: ");
	scanf("%d",&grade);
	}
	if(grade>=90)
	{  printf("AA",&grade);
	}
	if(grade>=80 && grade<90)
	{  printf("BB",&grade);
	}
	if(grade>=70 && grade<80)
	{  printf("CC",&grade);
	}
	if(grade>=60 && grade<70)
	{  printf("DD",&grade);
	}
	else if(grade>=50 && grade<60)
	{  printf("EE",&grade);
	}
	else
	{  printf("FF");
	}
	return 0;
}
