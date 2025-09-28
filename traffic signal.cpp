#include<stdio.h>
int main()
{
	char signalcolor;
	int time;
	printf("Trafic signal guidlines,Enter color: \nR for red \nY for yellow \nG for green:\n");
	scanf("%c", &signalcolor);
	if(signalcolor=='R')
	{
		printf("Whats the time <2200 or >2200 ??");
		scanf("%d", &time);
		if(time<2200)
		{
			printf("\nRed signal!!!\nStop and wait");
		}
		else if(time>2200)
		{
			printf("\nRed signal!!! Stop,but night caution allowed");
		}
	}
	else if(signalcolor=='Y')
	{
		printf("\nDisplay Get ready!!!");
	}
	else if(signalcolor=='G')
	{
		printf("\nGO!!!!");
	}
	else{
	 if((signalcolor!='R') && (signalcolor!='Y') && (signalcolor!='G')) {
	 	printf("\nInvalid signal!!!!");
		
	}
}
return 0;
	
}