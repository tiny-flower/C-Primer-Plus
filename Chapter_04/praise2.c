#include <stdio.h>
#define RAISE "Your are an extrodinary being"
int main(void)
{
    char name[40];

    printf("what's your name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s\n",name,RAISE);

    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof(name));
    printf("The phrase of praise has %zd letters %zd memory cells.\n", strlen(RAISE), sizeof(RAISE));

    return 0;
}