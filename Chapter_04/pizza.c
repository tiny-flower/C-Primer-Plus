#include <stdio.h>
#define PI 3.1415926535
int main(void)
{
    float area, circum, radius;
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2 * PI * radius;
    return 0;
}