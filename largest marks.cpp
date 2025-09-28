#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,largest;
	printf("Enter the Student 1 marks:\n");
	scanf("%d", &marks1);
	printf("Enter the Student 2 marks:\n");
	scanf("%d", &marks2);
	printf("Enter the Student 3 marks:\n");
	scanf("%d", &marks3);
	largest = (marks1> marks2) ? ((marks1 >marks3 ) ? marks1 : marks3) : ((marks2 > marks3) ? marks2 : marks3);
	printf("The largest mark is: %d\n", largest);

    return 0;
	
}