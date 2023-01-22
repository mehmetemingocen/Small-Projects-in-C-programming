#include<stdio.h>
#include<stdlib.h>
void main()
{
	printf("vowel or consonant control \n");
	
	char letter,A,E,I,O,U;
	
	printf("pls enter a letter : ");
	scanf("%c",letter);
	
	if(letter=="A" || letter=="E" || letter=="I" || letter=="O" || letter=="U")
	{ printf("this letter is vowel...",letter);
	}
	else
	{ printf("this letter is consonant...",letter);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
