#include <stdio.h>
#define RAISE "Your are an extrodinary being"
int main(void)
{
    char name[40];

    printf("what's your name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s\n",name,RAISE);
    
    return 0;
}