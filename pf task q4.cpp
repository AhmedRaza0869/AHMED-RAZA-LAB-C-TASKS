#include <stdio.h>
#include <math.h>

int main() {
    int radius;
	float area, circumference, sqr;
	float pi=3.142;
    printf("Enter the radius of the water tank: ");
    scanf("%d", &radius);

    
    area = pi*radius*radius;         
    circumference = 2 * pi * radius;    
    sqr=sqrt(radius);           

    printf("Area of the tank: %.2f\n", area);
    printf("Circumference of the tank: %.2f\n", circumference);
    printf("Square root of radius: %.2f\n", sqr);

    return 0;
}
