#include<stdio.h>
void main()
{
	double inch,cm;
	printf("Please input inch value : \n");
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch = %lf cm \n",inch,cm );
}
