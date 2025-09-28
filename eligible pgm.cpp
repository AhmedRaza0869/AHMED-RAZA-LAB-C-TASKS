#include<stdio.h>
int main()
{
	int percent;
	char ch,chr;
	printf("Whats your attendance percentage??:\n");
	scanf("%d", &percent);
	printf("%d%%\n",percent);
	if(percent<75)
	{
		printf("\nYou are not eligible!!!");
	}
	else{
		printf("Did you passed your midterm exam , Enter P for Pass and F for Fail:\n");
		scanf(" %c",&ch);
		if(ch=='F')
		{
			printf("You failed, You are not eligible");
		}
		else if(ch=='P')
		{
			printf("Did you have paid the exam fee, Enter Y for yes and N for no:\n");
			scanf(" %c",&chr);
			if(chr=='N')
			{
				printf("Pls clear your dues to sit in the final exam");
			}
			else {
				printf("You are eligible for final exam");
			}
		}
	}
	return 0;
}