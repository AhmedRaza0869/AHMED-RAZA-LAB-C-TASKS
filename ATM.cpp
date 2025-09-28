#include<stdio.h>
int main()
{
	int pin,wdamount,uptdbalance;
	int balance=50000;
	int PIN=2307;
	printf("Enter your four digit  PIN no:\n");
	scanf("%d",&pin );
	if(pin==PIN)
	{
		printf("\nEnter the amount of money you want to withdraw:\n");
		scanf("%d", &wdamount);
		if(wdamount>balance)
		{
			printf("\nInsufficient balance!!!");
		}
		else{
			uptdbalance=balance-wdamount;
			printf("\nTransaction processing....");
			printf("\nTransaction succesfull!!        your previous balance was %dpkr       you withdrawed %dpkr",balance,wdamount);
			printf("\nYour remaining balance is %d",uptdbalance);
		}
	}
	else {
		printf("\nEnter the correct PIN code!!");
	}
	return 0;
}