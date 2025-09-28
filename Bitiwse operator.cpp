#include<stdio.h>
int main()
{
	printf("Today we will learn how bitwise operators work in see!");
	printf("\nLet us take the following expression (a&b)|(a^b)\n");
	int a=2,b=7,s1,s2,s3;
	s1=(a&b);
	s2=(a^b);
	s3=(s1|s2);
	printf("\nThe binary operation for a&b is:\n00000010\n&\n00000111\n00000010");
	printf("\nThe value for the expression a&b is:\n%d&%d=%d",a,b,s1);
	printf("\nThe binary operation for a^b is:\n00000010\n^\n00000111\n00000101");
	printf("\nThe value for the expression a^b is:\n%d^%d=%d",a,b,s2);
	printf("\nThe binary operation for (a&b)|(a^b)is:\n00000010\n|\n00000101\n00000111");
	printf("\nThe value for the expression (a&b)|(a^b) is:\n%d|%d=%d",s1,s2,s3);
	return 0;

}