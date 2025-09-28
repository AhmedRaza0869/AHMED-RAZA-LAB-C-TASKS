#include<stdio.h>
int main()
{
	int integer;
	printf("Enter an integer:-\n");
	scanf("%d", &integer);
	(integer%2==0)?printf("\nEven number!"):
		(integer%3==0)?printf("\nDivisible by 3"):
	printf("\nOdd and not divisible by 3!");
	return 0;
		
}