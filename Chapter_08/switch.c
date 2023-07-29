#include<stdio.h>
char get_choice(void);
void count(void);
int main(void)
{
    int choice;
    while( (choice = get_choice()) != 'q' )
    {
        switch (choice)
        {
        case 'a':
            printf("buy low sell high");
            break;
        case 'b':
            putchar('\a');
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error\n");
            break;
        }
    }
    return 0;
}

char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice\n");
    ch = getchar();
    while ((ch < 'a' || ch > 'c') && ch != 'q')     
    {
        ch = getchar();
    }
    return ch;
}

void count(){
    printf("count\n");
}

