#include<stdio.h>
int main()
{
	int x,y,z,s1,s2,s3,s4,s5,s6,s7,s8,fresult;
	printf("We will demonstrate how operatore precedence work in C!!\a\n:");
	printf("Enter any three numbers:-\n");
	scanf("%d\n%d\n%d", &x, &y, &z);
	printf("We have to evaluate this expression \nx+y*z>10 && x-z<y||!(y%%z)\n");
	s1=y*z;
	s2=s1+x;
	s3=s2>10;
	s4=x-z;
	s5=s4<y;
	s6=s3 && s5;
	s7=y%z;
	s8=!s7;
	fresult=s6||s8;
	printf("Step 1 :y*z\n%d*%d=%d\n",y,z,s1);
	printf("Step 2 :x+(y*z)\n%d+%d=%d\n",x,s1,s2);
	printf("Step 3 :x+(y*z)>10\n%d>10=%d\n",s2,s3);
	printf("Step 4 :x-z\n%d-%d=%d\n",x,y,s4);
	printf("Step 5 :x-z<y\n%d<%d=%d\n",s4,y,s5);
	printf("Step 6:x+y*z>10 && x-z<y\n%d&&%d=%d\n",s3,s5,s6);
	printf("Step 7:y%%z\n %d%%%d=%d\n",y,z,s7);
	printf("Step 8:!(y%%z)\n!%d=%d\n",s7,s8);
	printf("Step 9(Final step):x+y*z>10 && x-z<y||!(y%%z)\n%d||%d=%d",s6,s8,fresult);
	return 0;
	
}