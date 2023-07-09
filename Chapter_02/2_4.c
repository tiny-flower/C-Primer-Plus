#include <stdio.h>

void print_jolly(void);
void print_nobody(void);

int main(void)
{
    print_jolly();
    print_jolly();
    print_jolly();
    print_nobody();
}

void print_jolly(void)
{
    printf("For he's jolly good fellow!\n");
}
void print_nobody(void)
{
    printf("Which nobody can deny!\n");
}